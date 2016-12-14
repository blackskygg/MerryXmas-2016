#include <Adafruit_SSD1306.h>
#include <Wire.h>

#include "types.h"
#include "io.h"

/*
   OED SETTINGS
*/
#define OLED_CS 9
#define OLED_DC 8
#define OLED_RESET 7
#define OLED_MOSI 6
#define OLED_CLK 5

/*
   Keyboard Array Settings
*/
#define TS 10  //the counter threshold


/*
   keyboard array status
*/
static const int C[3] = {12, 10, 4};
static const int R[3] = {2, 11, 3};
static uint8_t count[3][3] = {0};
static bool stat[3][3] = {false}; //true means low, thus IS presed


#define CHECK_KEY(k) stat[((k)-1)%3][((k)-1)/3]

Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

void init_io()
{
  //start serial connection
  //Serial.begin(9600);

  //configure KeyBoard Pins
  for (int i = 0; i < 3; ++i) {
    pinMode(R[i], INPUT_PULLUP);
    pinMode(C[i], OUTPUT);
  }

  //first clean the keyboard
  for (int i = 0; i < 100; ++i) {
    delay(1);
    update_key_stat();
  }

  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC);
  // init done

  //splash
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.clearDisplay();   // clears the screen and buffer
  display.drawBitmap(0, 0, bit_map, 128, 64, WHITE);
  display.display();
  delay(1000);
}

void update_key_stat()
{
  uint8_t pinVal;

  for (int n = 0; n < 10; ++n) { //iterate 10 times to eliminate noise
    delay(2);
    for (int c = 0; c < 3; ++c) {
      pinMode(C[c], OUTPUT);
      pinMode(C[(c + 1) % 3], INPUT_PULLUP);
      pinMode(C[(c + 2) % 3], INPUT_PULLUP);
      digitalWrite(C[c], LOW);
      for (int r = 0; r < 3; ++r) {
        pinVal = digitalRead(R[r]);

        if ((pinVal == LOW && stat[c][r]) ||
            (pinVal == HIGH && !stat[c][r])) {     //about to change stat?
          if (++count[c][r] >= TS) { //reach the threshold?
            if (stat[c][r] = !stat[c][r]) /*Serial.println(r * 3 + c + 1)*/;
          }
        } else {     //not interested, suspicious vanished
          count[c][r] = 0;
        }
      }
    }
  }
}

void print_matrix()
{
  display.clearDisplay();

  //draw the grid
  display.drawRect(32, 2, 66, 55, WHITE);
  display.drawLine(32, 2 + 17, 64 + 33, 2 + 17, WHITE);
  display.drawLine(32, 2 + 34, 64 + 33, 2 + 34, WHITE);
  display.drawLine(32 + 20, 2, 32 + 20, 55, WHITE);
  display.drawLine(32 + 42, 2, 32 + 42, 55, WHITE);

  //then the numbers
  for (int i = 0; i < 3; ++i) {
    display.setCursor(35, 4 + i * 18);
    for (int j = 0; j < 3; ++j) {
      if (stat[j][i]) display.setTextColor(WHITE);
      else display.setTextColor(BLACK);
      //Serial.println("fuck");
      display.write('0' + i * 3 + j + 1);
      display.write(' ');
    }
    display.write('\n');
  }
  //Serial.println("Youuuuuuu");
  display.display();
}

bool check_pass(const bool pass[], uint8_t len)
{
  bool flag = true;
  uint8_t cnt;
  
  for (;;) {
    delay(200);
    update_key_stat();
    print_matrix();
    flag = true;
    cnt = 0;
    for (int i = 0; i < 9; ++i) {
      //Serial.println(stat[i % 3][i / 3]);
      if (stat[i % 3][i / 3]) cnt++;
      if (pass[i] != stat[i % 3][i / 3]) {
        flag = false;
      }
    }
    if (cnt == len) return flag;
  }
}

void wait_for_key(uint8_t no, bool up)
{
  for (;;) {
    //Serial.print("waiting for ");
    //Serial.println(up);
    update_key_stat();
    if (stat[(no - 1) % 3][(no - 1) / 3] == up) return;
  }
}

void play_bmp(const unsigned char bm[], int w, int l, int x, int y)
{
  display.clearDisplay();
  // the map
  display.drawBitmap(x, y, bm, w, l, WHITE);
  display.display();
  WAIT_KEY(K_NEXT);
}

uint8_t print_room(const Room *room, const unsigned char g[], uint8_t x, uint8_t y)
{
  const static unsigned char PROGMEM target[] = {0x10, 0x10, 0x28, 0xC6, 0x28, 0x10, 0x10};
  display.clearDisplay();
  // the map
  display.drawBitmap(0, 0, g, 64, 64, WHITE);

  // the position name
  PRINT_TEXT(pos_names + room->nm_idx, 2, 84, 24);

  //the character
  display.drawBitmap(8 + x * 20, 6 + y * 15, target, 7, 7, WHITE);
  display.display();

  //look carefully
  delay(200);
  uint8_t keys[5] = {K_CHECK, K_U, K_D, K_L, K_R};
  //wait for key
  for (;;) {
    for (int i = 0; i < 5; ++i) {
      update_key_stat();
      if (CHECK_KEY(keys[i]) == false) return keys[i];
    }
  }
}

/*
  uint8_t select_direct(const Unit gmap[7][7], int x, int y)
  {
  const static unsigned char PROGMEM t_curr[][32] = {
    0x00, 0x00, 0x3F, 0xF8, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08, 0x3F, 0xF8, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08, 0x3F, 0xF8, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08, 0x20, 0x08, 0x3F, 0xF8, 0x20, 0x08, //目0
    0x10, 0x10, 0x08, 0x10, 0x08, 0x20, 0xFF, 0xFE, 0x00, 0x00, 0x3E, 0x08, 0x22, 0x48, 0x22, 0x48, 0x3E, 0x48, 0x22, 0x48, 0x22, 0x48, 0x3E, 0x48, 0x22, 0x08, 0x22, 0x08, 0x2A, 0x28, 0x24, 0x10, //前1
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, //：2
  };

  const static unsigned char PROGMEM t_arrow[32] {
    0x00, 0x00, 0x01, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x18, 0x30, 0x38, 0x38, 0x78, 0x3C, 0x38, 0x38, 0x18, 0x30, 0x0F, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, //
  };

  uint8_t dir[4] = {K_U, K_D, K_L, K_R};
  bool need_redraw = true;

  for (;;) {
    if (need_redraw) {
      display.clearDisplay();
      PRINT_TEXT(t_curr, 3, 16, 48);
      PRINT_POS(gmap, x, y, 64, 48);
      display.drawBitmap(56, 16, t_arrow, 16, 16, WHITE);
      if (y > 0) PRINT_POS(gmap, x, y - 1, 0, 16);
      if (x > 0) PRINT_POS(gmap, x - 1, y, 40, 0);
      if (x < 6) PRINT_POS(gmap, x + 1, y, 40, 32);
      if (y < 6) PRINT_POS(gmap, x, y + 1, 80, 16);
      display.display();
      need_redraw = false;
    }

    update_key_stat();
    if (CHECK_KEY(K_CHECK)) {
      (gmap[x][y].check)();
      need_redraw = true;
      continue;
    }

    for (int i = 0; i < 4; ++i) {
      if (CHECK_KEY(dir[i])) return dir[i];
    }
  }
  }
*/

void play_text(const uint8_t data[][32], int len)
{
  int x = 0, y = 0;

  display.clearDisplay();
  for (int i = 0; i < len; ++i) {
    if (y >= 63) {
      y = 0;
      WAIT_KEY(K_NEXT);
      display.clearDisplay();
    }

    display.drawBitmap(x, y, data[i], 16, 16, WHITE);

    display.display();
    if (!((i + 1) % 8)) {
      y += 16;
      x = 0;
    } else {
      x += 16;
    }
    delay(20);
  }

  WAIT_KEY(K_NEXT);
}

