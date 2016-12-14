#ifndef _DATA_H_
#define _DATA_H_

#include  "types.h"

const static unsigned char PROGMEM bit_map[] = {
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0xFC,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x1C,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xE0,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0C,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x30,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x60,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x70,0x00,0x07,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0x70,0x00,0x07,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x70,0x00,0x07,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x02,0xA0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x80,0x01,0x86,0x02,0xA0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x82,0x81,0xFE,0x02,0xA0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x82,0x80,0x78,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x82,0x80,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x80,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x0F,0x01,0xFF,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x1F,0xFF,0x3E,0x40,0x00,0x00,0x00,
0x00,0xC0,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x40,0x08,0x40,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x40,0x08,0x40,0x00,0x00,0x00,
0x00,0x60,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x3F,0xFF,0x88,0x40,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x40,0x08,0x7E,0x00,0x00,0x00,
0x00,0x18,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x02,0x49,0x88,0x02,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x3E,0x4F,0x08,0x02,0x00,0x00,0x00,
0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x02,0x48,0x88,0x02,0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x1C,0x00,0x00,0x00,0x0E,0x48,0x8B,0x02,0x00,0x00,0x00,
0x00,0x00,0x78,0x00,0x00,0x30,0x00,0x00,0x00,0x32,0x4F,0x1E,0x02,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x60,0x20,0x00,0x00,0x00,0x00,0x40,0x30,0x02,0x00,0x00,0x00,
0x00,0x00,0x1B,0x00,0x60,0x20,0x00,0x00,0x00,0x00,0x40,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x13,0x00,0x60,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x13,0x00,0x60,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x00,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x13,0x00,0xC2,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x01,0x82,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x19,0x03,0x06,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0x83,0x06,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x08,0xC2,0x0C,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0xC6,0x38,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x3F,0xCF,0xF0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x99,0xC0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x60,0x30,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x20,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x40,0x20,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x20,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x70,0x30,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x07,0x8F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//未命名文件0
};

/*positions*/
const static unsigned char PROGMEM pos_names[][32] = {
  0x02, 0x00, 0x01, 0x00, 0x7F, 0xFE, 0x40, 0x02, 0x88, 0x04, 0x0F, 0xF0, 0x10, 0x20, 0x2C, 0x40, 0x03, 0x80, 0x1C, 0x70, 0xE0, 0x0E, 0x1F, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x1F, 0xF0, 0x10, 0x10, //客0
  0x00, 0x00, 0x3F, 0xFE, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x2F, 0xFE, 0x20, 0x40, 0x20, 0x40, 0x20, 0x40, 0x20, 0x40, 0x20, 0x40, 0x20, 0x40, 0x20, 0x40, 0x40, 0x40, 0x41, 0x40, 0x80, 0x80, //厅1
  0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x3F, 0xF8, 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFE, 0x01, 0x00, 0x01, 0x00, 0x11, 0x00, 0x11, 0xF8, 0x11, 0x00, 0x11, 0x00, 0x29, 0x00, 0x47, 0xFE, 0x80, 0x00, //走8
  0x01, 0x00, 0x00, 0x80, 0x3F, 0xFE, 0x22, 0x00, 0x21, 0x00, 0x2F, 0xBE, 0x28, 0xA2, 0x2F, 0xA4, 0x28, 0xA8, 0x2F, 0xA4, 0x2A, 0x22, 0x29, 0x22, 0x2A, 0xAA, 0x4C, 0xA4, 0x48, 0x20, 0x80, 0x20, //廊9
  0x00, 0x00, 0x3F, 0xFE, 0x20, 0x08, 0x3F, 0x88, 0x20, 0x08, 0x2F, 0x08, 0x29, 0x7E, 0x29, 0x08, 0x29, 0x08, 0x2F, 0x48, 0x20, 0x28, 0x29, 0x08, 0x26, 0x08, 0x43, 0x88, 0x5C, 0x28, 0x88, 0x10, //厨2
  0x02, 0x00, 0x01, 0x00, 0x3F, 0xFC, 0x20, 0x04, 0x20, 0x04, 0x3F, 0xFC, 0x21, 0x00, 0x20, 0x80, 0x3F, 0xFC, 0x22, 0x00, 0x22, 0x00, 0x23, 0xF8, 0x44, 0x08, 0x44, 0x08, 0x88, 0x28, 0x10, 0x10, //房3
  0x00, 0x20, 0x7F, 0xA0, 0x48, 0x20, 0x48, 0x20, 0x48, 0x20, 0x7F, 0x30, 0x41, 0x28, 0x41, 0x24, 0x41, 0x22, 0x7F, 0x22, 0x48, 0x20, 0x48, 0x20, 0x48, 0x20, 0x7F, 0xA0, 0x00, 0x20, 0x00, 0x20, //卧4
  0x02, 0x00, 0x01, 0x00, 0x7F, 0xFE, 0x40, 0x02, 0x80, 0x04, 0x3F, 0xF8, 0x04, 0x00, 0x08, 0x20, 0x1F, 0xF0, 0x01, 0x10, 0x01, 0x00, 0x3F, 0xF8, 0x01, 0x00, 0x01, 0x00, 0xFF, 0xFE, 0x00, 0x00, //室5
  0x02, 0x20, 0x02, 0x10, 0x02, 0x08, 0x3F, 0xE0, 0x02, 0x20, 0x02, 0x20, 0x02, 0x20, 0x02, 0x20, 0xFF, 0xFC, 0x02, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0x28, 0x02, 0x10, 0x02, 0x00, //书6
  0x02, 0x00, 0x01, 0x00, 0x3F, 0xFC, 0x20, 0x04, 0x20, 0x04, 0x3F, 0xFC, 0x21, 0x00, 0x20, 0x80, 0x3F, 0xFC, 0x22, 0x00, 0x22, 0x00, 0x23, 0xF8, 0x44, 0x08, 0x44, 0x08, 0x88, 0x28, 0x10, 0x10, //房7
};
/*numberes */
const static unsigned char PROGMEM pos_idx[12][32] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x08, 0x24, 0x38, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x24, 0x08, 0x18, 0x3E, 0x00, 0x00, 0x00, 0x00, //01
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x24, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x02, 0x42, 0x04, 0x42, 0x08, 0x42, 0x10, 0x42, 0x20, 0x24, 0x42, 0x18, 0x7E, 0x00, 0x00, 0x00, 0x00, //02
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x24, 0x42, 0x42, 0x42, 0x42, 0x02, 0x42, 0x04, 0x42, 0x18, 0x42, 0x04, 0x42, 0x02, 0x42, 0x42, 0x24, 0x42, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, //03
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x04, 0x24, 0x0C, 0x42, 0x0C, 0x42, 0x14, 0x42, 0x24, 0x42, 0x24, 0x42, 0x44, 0x42, 0x7F, 0x42, 0x04, 0x24, 0x04, 0x18, 0x1F, 0x00, 0x00, 0x00, 0x00, //04
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x7E, 0x24, 0x40, 0x42, 0x40, 0x42, 0x40, 0x42, 0x78, 0x42, 0x44, 0x42, 0x02, 0x42, 0x02, 0x42, 0x42, 0x24, 0x44, 0x18, 0x38, 0x00, 0x00, 0x00, 0x00, //05
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x24, 0x24, 0x42, 0x40, 0x42, 0x40, 0x42, 0x5C, 0x42, 0x62, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x22, 0x18, 0x1C, 0x00, 0x00, 0x00, 0x00, //06
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x7E, 0x24, 0x42, 0x42, 0x04, 0x42, 0x04, 0x42, 0x08, 0x42, 0x08, 0x42, 0x10, 0x42, 0x10, 0x42, 0x10, 0x24, 0x10, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, //07
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x24, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x42, 0x18, 0x42, 0x24, 0x42, 0x42, 0x42, 0x42, 0x24, 0x42, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, //08
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 0x24, 0x44, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x42, 0x3A, 0x42, 0x02, 0x42, 0x02, 0x24, 0x24, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, //09
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x38, 0x24, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x24, 0x3E, 0x18, 0x00, 0x00, 0x00, 0x00, //10
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x38, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0x00, //11
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x3C, 0x38, 0x42, 0x08, 0x42, 0x08, 0x42, 0x08, 0x02, 0x08, 0x04, 0x08, 0x08, 0x08, 0x10, 0x08, 0x20, 0x08, 0x42, 0x3E, 0x7E, 0x00, 0x00, 0x00, 0x00, //12
};

#include "plot.h"
void (* const cks0[])() = {check_0_1, check_0_2, check_0_3, check_0_4, check_0_5, check_0_6, check_0_7, check_0_8, check_0_9};
void (* const cks1[])() = {check_1_1, check_1_2, check_1_3};
void (* const cks2[])() = {check_2_1, check_2_2, check_2_3, check_2_4, check_2_5, check_2_6, check_2_7, check_2_8, check_2_9};
void (* const cks3[])() = {check_3_1, check_3_2, check_3_3, check_3_4, check_3_5, check_3_6, check_3_7, check_3_8, check_3_9};
void (* const cks4[])() = {check_4_1, check_4_2, check_4_3, check_4_4 };
void (* const cks5[])() = {check_5_1, check_5_2, check_5_3, check_5_4, check_5_5, check_5_6, check_5_7, check_5_8, check_5_9, check_5_10, check_5_11, check_5_12};

const Trans tr0[] = {{2, K_R, 1, 0}, {5, K_R, 1, 1}, {8, K_R, 1, 2}};
const Trans tr1[] = {{0, K_L, 0, 2}, {1, K_L, 0, 5}, {1, K_R, 2, 3}, {2, K_L, 0, 8}, {2, K_D, 4, 0}};
const Trans tr2[] = {{3, K_L, 1, 1}};
const Trans tr3[] = {{5, K_R, 4, 1}};
const Trans tr4[] = {{1, K_L, 3, 5}, {1, K_R, 5, 3}, {1, K_U, 1, 2}};
const Trans tr5[] = {{3, K_L, 4, 1}};

const static unsigned char PROGMEM ln0[][16*32] = {{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x30, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x30, 0x00, 0x02, 0x00, 0x00, 0x20, 0x00, 0x00, 0x30, 0x00, 0x04, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x30, 0x00, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0x30, 0x00, 0x10, 0x00, 0x00, 0x04, 0x00, 0x00, 0x30, 0x00, 0x20, 0x00, 0x00, 0x02, 0x00, 0x00, 0x30, 0x00, 0x40, 0x00, 0x00, 0x01, 0x00, 0x00,
  0x30, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x30, 0x01, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x30, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x30, 0x00, 0x40, 0x00, 0x00, 0x01, 0x00, 0x00,
  0x30, 0x00, 0x20, 0x00, 0x00, 0x02, 0x00, 0x00, 0x30, 0x00, 0x10, 0x00, 0x00, 0x04, 0x00, 0x00, 0x30, 0x00, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0x30, 0x00, 0x04, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x30, 0x00, 0x02, 0x00, 0x00, 0x20, 0x00, 0x00, 0x30, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x30, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x30, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x10, 0x04, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
}, {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFE, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
},{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x06, 0x30, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x06, 0x30, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x06,
  0x30, 0x00, 0x18, 0x00, 0x00, 0x0C, 0x00, 0x06, 0x30, 0x00, 0x60, 0x00, 0x00, 0x03, 0x00, 0x06, 0x30, 0x01, 0x80, 0x00, 0x00, 0x00, 0xC0, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x30, 0x06,
  0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06,
  0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06,
  0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06,
  0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06,
  0x30, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x30, 0x06, 0x00, 0x00, 0x00, 0x00, 0x30, 0x06, 0x30, 0x01, 0x80, 0x00, 0x00, 0x00, 0xC0, 0x06, 0x30, 0x00, 0x60, 0x00, 0x00, 0x03, 0x00, 0x06,
  0x30, 0x00, 0x18, 0x00, 0x00, 0x0C, 0x00, 0x06, 0x30, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x06, 0x30, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x06, 0x30, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x18, 0x0C, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
},{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x0F, 0x80, 0x01, 0xF0, 0x00, 0x06, 0x30, 0x00, 0x30, 0x60, 0x06, 0x0C, 0x00, 0x06, 0x30, 0x00, 0x40, 0x10, 0x08, 0x02, 0x00, 0x06,
  0x30, 0x00, 0x80, 0x08, 0x10, 0x01, 0x00, 0x06, 0x30, 0x00, 0x80, 0x04, 0x20, 0x01, 0x00, 0x06, 0x30, 0x01, 0x00, 0x02, 0x40, 0x00, 0x80, 0x06, 0x30, 0x01, 0x00, 0x02, 0x40, 0x00, 0x80, 0x06,
  0x30, 0x02, 0x00, 0x01, 0x80, 0x00, 0x40, 0x06, 0x30, 0x02, 0x00, 0x01, 0x80, 0x00, 0x40, 0x06, 0x30, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x30, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00,
  0x30, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x30, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x30, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x30, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00,
  0x30, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x30, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x30, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x30, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00,
  0x30, 0x00, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0x30, 0x00, 0x40, 0x00, 0x00, 0x04, 0x00, 0x00, 0x30, 0x00, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x30, 0x00, 0x10, 0x00, 0x00, 0x08, 0x00, 0x00,
  0x30, 0x00, 0x08, 0x00, 0x00, 0x10, 0x00, 0x06, 0x30, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x06, 0x30, 0x00, 0x02, 0x00, 0x00, 0x40, 0x00, 0x06, 0x30, 0x00, 0x01, 0x00, 0x00, 0x80, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
}, {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x03, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xE0, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x20, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x3F, 0xFE, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
}, {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x06,
  0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x06,
  0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x06, 0x00, 0x03, 0xFF, 0xE0, 0x01, 0xFF, 0xF0, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x06,
  0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x06, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x06,
  0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00, 0x20, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x06,
  0x30, 0x00, 0x08, 0x00, 0x00, 0x04, 0x00, 0x06, 0x30, 0x00, 0x08, 0x00, 0x00, 0x04, 0x00, 0x06, 0x30, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x06, 0x30, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x06,
  0x30, 0x00, 0x20, 0x00, 0x00, 0x01, 0x00, 0x06, 0x30, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x06, 0x30, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x06, 0x30, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x06,
  0x30, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x06, 0x30, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x06, 0x30, 0x01, 0x00, 0x00, 0x00, 0x00, 0x20, 0x06, 0x30, 0x03, 0xFF, 0xE0, 0x01, 0xFF, 0xF0, 0x06,
  0x30, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
}};

/*
  finally the map, yes, the map
*/
const Room rooms[6] = {
  {cks0, 0, 3, 3, 0, 2, 3, tr0},
  {cks1, 2, 1, 3, 1, 1, 5, tr1},
  {cks2, 4, 3, 3, 0, 2, 5, tr2},
  {cks3, 6, 3, 3, 0, 2, 1, tr3},
  {cks4, 2, 1, 4, 1, 1, 3, tr4},
  {cks5, 8, 3, 4, 0, 2, 1, tr5}
};

#endif
