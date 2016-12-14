#include "types.h"
#include "io.h"
#include "data.h"

void setup() {
  init_io();
  main_proc();
}

void main_proc()
{
  bool jmp_flag;
  uint8_t x = 0, y = 2, pos;
  Room *room = rooms + 3;
  const unsigned char *g = ln0[3]; 
  uint8_t k;

  for (;;) {
    pos = y * room->w + (x - room->min_x);

    k = print_room(room, g, x, y);
    jmp_flag = false;
    for (int i = 0; i < room->trans_len; ++i) {
      if ((room->trans[i].pos == pos) && (room->trans[i].dir == k)) {
        pos = room->trans[i].n_pos;
        g = ln0[room->trans[i].n_room];
        room = rooms + room->trans[i].n_room; 
        x = pos % room->w + room->min_x;
        y = pos / room->w;
        jmp_flag = true;
        break;
      }
    }

    if (jmp_flag) continue;
    switch (k) {
      case K_U:
        if (y > 0)
          --y;
        break;
      case K_D:
        if (y < room->l - 1)
          ++y;
        break;
      case K_L:
        if (x > room->min_x)
          --x;
        break;
      case K_R:
        if (x < room->max_x)
          ++x;
        break;
      case K_CHECK:
        room->check[pos]();
        break;
      default:
        break;
    }
  }
}

void loop()
{
}

