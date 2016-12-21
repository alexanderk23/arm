﻿
// PSG definitions
//
// AY-ARM project
// (c) TS-Labs
//
// Iske rauta

typedef union
{
  struct
  {
    u8  t0:1;
    u8  t1:1;
    u8  t2:1;
    u8  n0:1;
    u8  n1:1;
    u8  n2:1;
    u8  i0:1;
    u8  i1:1;
  };
  u8 b;
} AYMIX_T;

typedef union
{
  struct
  {
    u8  vol:5;
    u8  mode:1;
    u8  padding:2;
  };
  u8 b;
} AYVOL_T;

typedef union
{
  struct
  {
    u8  intfrq:3;  // internal frequency (see. Excel)
    u8  trben:1;   // 0 - turbo scheme disabled, 1 - enabled
    u8  selen:1;   // 0 - SEL pin disables, 1 - enabled
    u8  iclk:1;    // 0 - ext pin, 1 - int clock
    u8  padding:1;
    u8  type:1;    // 0 - AY / 1 - YM
  };
  u8 b;
} AYCTRL;

const u16 amptab_ay[] =
{
  0x0000,
  0x0000,
  0x028F,
  0x028F,
  0x03B3,
  0x03B3,
  0x0564,
  0x0564,
  0x07DC,
  0x07DC,
  0x0BA9,
  0x0BA9,
  0x1083,
  0x1083,
  0x1B7C,
  0x1B7C,
  0x2068,
  0x2068,
  0x347A,
  0x347A,
  0x4ACE,
  0x4ACE,
  0x5F72,
  0x5F72,
  0x7E16,
  0x7E16,
  0xA2A4,
  0xA2A4,
  0xCE3A,
  0xCE3A,
  0xFFFF,
  0xFFFF
};

const u16 amptab_ym[] =
{
  0x0000,
  0x0000,
  0x0131,
  0x01FA,
  0x02CE,
  0x0393,
  0x045A,
  0x0520,
  0x063D,
  0x079A,
  0x08FA,
  0x0A57,
  0x0C6D,
  0x0EEF,
  0x116C,
  0x13E9,
  0x17AF,
  0x1C70,
  0x2137,
  0x2603,
  0x2D3A,
  0x3628,
  0x3F13,
  0x47F6,
  0x556F,
  0x6682,
  0x77A6,
  0x88D0,
  0xA29A,
  0xC20C,
  0xE142,
  0xFFFF
};

const u16 amptab_us[] =
{
  0x0000,
  0x0000,
  0x00EF,
  0x01D0,
  0x0290,
  0x032A,
  0x03EE,
  0x04D2,
  0x0611,
  0x0782,
  0x0912,
  0x0A36,
  0x0C31,
  0x0EB6,
  0x1130,
  0x13A0,
  0x1751,  0x1BF5,  0x20E2,  0x2594,  0x2CA1,  0x357F,  0x3E45,  0x475E,  0x5502,  0x6620,  0x7730,  0x8844,  0xA1D2,  0xC102,  0xE0A2,  0xFFFF
};

// deprecated!
const u16 amptab_[] =
{
  0x0000,
  0x0340,
  0x04C0,
  0x06F2,
  0x0A44,
  0x0F13,
  0x1510,
  0x227E,
  0x289F,
  0x414E,
  0x5B21,
  0x7258,
  0x905E,
  0xB550,
  0xD7A0,
  0xFFFF
};
