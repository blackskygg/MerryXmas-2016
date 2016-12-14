#ifndef _TYPES_H_
#define _TYPES_H_

typedef struct {
  uint8_t pos: 4;
  uint8_t dir: 4;
  uint8_t n_room: 4;
  uint8_t n_pos: 4;
} Trans;

typedef struct {
  uint8_t xa: 4;
  uint8_t ya: 4;
  uint8_t xb: 4;
  uint8_t yb: 4;
} Line;

typedef struct {
  void (* const* check)();
  uint8_t nm_idx: 4;
  uint8_t w: 4;
  uint8_t l: 4;
  uint8_t min_x: 4;
  uint8_t max_x: 4;
  uint8_t trans_len: 4;
  const Trans *trans;
} Room;

#endif
