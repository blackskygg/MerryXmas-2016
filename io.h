#ifndef _IO_H_
#define _IO_H_

/*
   Keyboard mappings
*/
#define K_U 2
#define K_D 8
#define K_L 4
#define K_R 6
#define K_NEXT 9
#define K_CHECK 7
#define K_INV 3
#define K_OK 5

/*
   wait for a key "press"
*/
#define WAIT_KEY(k) do{ wait_for_key((k), false);  \
    wait_for_key((k), true);} while(0)

/*
    print text nolonger than 8 Chinese characters
*/
#define PRINT_TEXT(data, len, x, y) \
  for (int _i = 0; _i < len; ++_i)     \
    display.drawBitmap((x)+_i*16, (y), (data)[_i], 16, 16, WHITE);


void init_io();
void print_matrix();
void update_key_stat();
bool check_pass(const bool pass[], uint8_t len);
void wait_for_key(uint8_t no, bool up);
void play_text(const uint8_t data[][32], int len);
void play_bmp(const unsigned char bm[], int w, int l, int x, int y);
uint8_t print_room(const Room *room, const unsigned char g[], uint8_t x, uint8_t y);

#endif
