#ifndef __INIT_ANIMATION_H__
#define __INIT_ANIMATION_H__

/*********************************** 
  files   : 01.bmp,02.bmp,03.bmp,04.bmp,05.bmp,06.bmp,07.bmp,08.bmp,09.bmp,10.bmp,11.bmp,12.bmp,13.bmp,14.bmp,15.bmp,16.bmp,17.bmp,18.bmp,19.bmp,20.bmp,21.bmp,22.bmp,23.bmp,24.bmp,25.bmp,26.bmp,27.bmp,28.bmp,29.bmp,30.bmp
  duration: 100
  num     : 30
  size    : 2880 bytes
************************************/

struct LedFrame frames[MAX_LED_FRAMES] = {
  { // 0
    100, 
    {
      { 0x45, 0x13, 0x13, 0x63, 0x62, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x31, 0x36, 0x35, 0x52, 0x24, 0x56, 0x46 }, 
      { 0x52, 0x13, 0x54, 0x22, 0x21, 0x63, 0x12, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x53, 0x62, 0x21, 0x64, 0x43 }, 
      { 0x62, 0x34, 0x41, 0x32, 0x42, 0x52, 0x63, 0x14 }, 
      { 0x34, 0x12, 0x53, 0x23, 0x21, 0x62, 0x32, 0x26 }, 
      { 0x41, 0x46, 0x26, 0x45, 0x22, 0x25, 0x26, 0x45 }, 
      { 0x16, 0x32, 0x34, 0x22, 0x13, 0x52, 0x16, 0x64 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x32, 0x32, 0x65, 0x46 }, 
      { 0x46, 0x51, 0x41, 0x33, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x41, 0x16, 0x36, 0x56, 0x32, 0x26, 0x56, 0x34 }, 
      { 0x16, 0x35, 0x31, 0x34, 0x24, 0x61, 0x42, 0x16 }
    }
  },
  { // 1
    100, 
    {
      { 0x45, 0x13, 0x13, 0x63, 0x62, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x31, 0x36, 0x35, 0x52, 0x04, 0x56, 0x46 }, 
      { 0x50, 0x13, 0x04, 0x22, 0x21, 0x63, 0x12, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x53, 0x02, 0x21, 0x64, 0x43 }, 
      { 0x62, 0x34, 0x41, 0x32, 0x42, 0x52, 0x63, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x23, 0x21, 0x62, 0x32, 0x26 }, 
      { 0x41, 0x46, 0x26, 0x45, 0x22, 0x25, 0x26, 0x45 }, 
      { 0x16, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x64 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x32, 0x32, 0x65, 0x46 }, 
      { 0x06, 0x51, 0x41, 0x33, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x41, 0x16, 0x06, 0x56, 0x30, 0x26, 0x06, 0x34 }, 
      { 0x16, 0x35, 0x31, 0x34, 0x24, 0x01, 0x42, 0x16 }
    }
  },
  { // 2
    100, 
    {
      { 0x45, 0x13, 0x13, 0x63, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x35, 0x52, 0x04, 0x56, 0x46 }, 
      { 0x50, 0x13, 0x04, 0x22, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x50, 0x02, 0x01, 0x64, 0x43 }, 
      { 0x62, 0x64, 0x41, 0x32, 0x42, 0x52, 0x03, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x23, 0x20, 0x66, 0x32, 0x26 }, 
      { 0x41, 0x46, 0x26, 0x45, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x10, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x66 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x32, 0x32, 0x65, 0x46 }, 
      { 0x06, 0x51, 0x41, 0x33, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x06, 0x34 }, 
      { 0x16, 0x35, 0x30, 0x34, 0x24, 0x01, 0x42, 0x16 }
    }
  },
  { // 3
    100, 
    {
      { 0x45, 0x10, 0x13, 0x63, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x50, 0x13, 0x04, 0x02, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x50, 0x02, 0x01, 0x64, 0x03 }, 
      { 0x62, 0x64, 0x41, 0x32, 0x42, 0x52, 0x03, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x23, 0x20, 0x66, 0x32, 0x26 }, 
      { 0x41, 0x66, 0x26, 0x40, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x10, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x66 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x02, 0x32, 0x65, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x34 }, 
      { 0x16, 0x30, 0x30, 0x34, 0x24, 0x01, 0x42, 0x16 }
    }
  },
  { // 4
    100, 
    {
      { 0x45, 0x10, 0x03, 0x03, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x50, 0x13, 0x04, 0x02, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x50, 0x00, 0x01, 0x64, 0x03 }, 
      { 0x62, 0x64, 0x41, 0x62, 0x42, 0x52, 0x03, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x02, 0x26 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x10, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x66 }, 
      { 0x61, 0x63, 0x63, 0x10, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x34 }, 
      { 0x16, 0x30, 0x30, 0x34, 0x24, 0x01, 0x02, 0x06 }
    }
  },
  { // 5
    100, 
    {
      { 0x45, 0x00, 0x03, 0x03, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x60, 0x10, 0x04, 0x02, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x01, 0x63, 0x50, 0x00, 0x01, 0x64, 0x03 }, 
      { 0x62, 0x64, 0x61, 0x62, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x02, 0x26 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x60, 0x62, 0x34, 0x62, 0x13, 0x06, 0x16, 0x66 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x20, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x30 }, 
      { 0x16, 0x30, 0x30, 0x34, 0x24, 0x01, 0x02, 0x06 }
    }
  },
  { // 6
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x61, 0x00, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x60, 0x10, 0x04, 0x02, 0x21, 0x60, 0x00, 0x16 }, 
      { 0x31, 0x01, 0x63, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x62, 0x60, 0x61, 0x62, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x02, 0x06 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x26, 0x26, 0x45 }, 
      { 0x60, 0x62, 0x34, 0x62, 0x13, 0x06, 0x16, 0x66 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x20, 0x60, 0x02, 0x13 }, 
      { 0x00, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x34, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 7
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x61, 0x00, 0x36, 0x30, 0x52, 0x04, 0x00, 0x06 }, 
      { 0x60, 0x10, 0x04, 0x02, 0x21, 0x60, 0x00, 0x16 }, 
      { 0x31, 0x01, 0x63, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x06, 0x06 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x26, 0x26, 0x05 }, 
      { 0x60, 0x62, 0x34, 0x60, 0x13, 0x06, 0x16, 0x06 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x00, 0x41, 0x03, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x06, 0x56, 0x30, 0x26, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x34, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 8
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x01, 0x00, 0x36, 0x30, 0x52, 0x04, 0x00, 0x00 }, 
      { 0x60, 0x10, 0x00, 0x02, 0x21, 0x00, 0x00, 0x16 }, 
      { 0x31, 0x01, 0x03, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x10, 0x50, 0x63, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x26, 0x40, 0x02, 0x26, 0x26, 0x05 }, 
      { 0x60, 0x62, 0x34, 0x60, 0x13, 0x06, 0x06, 0x06 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x62, 0x05, 0x06 }, 
      { 0x06, 0x00, 0x40, 0x03, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x06, 0x06, 0x30, 0x20, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 9
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x01, 0x00, 0x30, 0x30, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x10, 0x00, 0x02, 0x21, 0x00, 0x00, 0x16 }, 
      { 0x01, 0x01, 0x00, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x46, 0x66, 0x06, 0x16 }, 
      { 0x64, 0x10, 0x60, 0x63, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x20, 0x40, 0x02, 0x26, 0x26, 0x05 }, 
      { 0x60, 0x62, 0x34, 0x60, 0x13, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x05, 0x06 }, 
      { 0x06, 0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x00, 0x06, 0x30, 0x20, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 10
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x02, 0x60, 0x04 }, 
      { 0x01, 0x00, 0x30, 0x00, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x16 }, 
      { 0x01, 0x01, 0x00, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x64, 0x60, 0x60, 0x63, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x20, 0x40, 0x02, 0x26, 0x26, 0x06 }, 
      { 0x60, 0x62, 0x64, 0x60, 0x13, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x00, 0x06, 0x00, 0x00, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 11
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x02, 0x60, 0x00 }, 
      { 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06 }, 
      { 0x01, 0x00, 0x00, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x64, 0x60, 0x60, 0x60, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x60, 0x60, 0x02, 0x26, 0x26, 0x06 }, 
      { 0x60, 0x60, 0x64, 0x60, 0x10, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x10, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 12
    100, 
    {
      { 0x40, 0x00, 0x03, 0x00, 0x02, 0x02, 0x60, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x01, 0x00, 0x00, 0x60, 0x00, 0x00, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x66, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x02, 0x26, 0x26, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0x02, 0x06 }
    }
  },
  { // 13
    100, 
    {
      { 0x00, 0x00, 0x03, 0x00, 0x02, 0x02, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x04, 0x06 }, 
      { 0x60, 0x60, 0x66, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x66, 0x26, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x06, 0x66, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0x02, 0x00 }
    }
  },
  { // 14
    100, 
    {
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06 }, 
      { 0x60, 0x60, 0x66, 0x60, 0x06, 0x66, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x66, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x06, 0x66, 0x06, 0x06 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
    }
  },
  { // 15
    100, 
    {
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x06 }, 
      { 0x60, 0x60, 0x66, 0x60, 0x06, 0x66, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x66, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x06, 0x66, 0x06, 0x06 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
    }
  },
  { // 16
    100, 
    {
      { 0x00, 0x00, 0x03, 0x00, 0x02, 0x02, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x04, 0x06 }, 
      { 0x60, 0x60, 0x66, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x66, 0x26, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x06, 0x66, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0x02, 0x00 }
    }
  },
  { // 17
    100, 
    {
      { 0x40, 0x00, 0x03, 0x00, 0x02, 0x02, 0x60, 0x00 }, 
      { 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x01, 0x00, 0x00, 0x60, 0x00, 0x00, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x66, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x06, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x02, 0x26, 0x26, 0x06 }, 
      { 0x60, 0x60, 0x60, 0x60, 0x00, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0x02, 0x06 }
    }
  },
  { // 18
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x02, 0x60, 0x00 }, 
      { 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06 }, 
      { 0x01, 0x00, 0x00, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x64, 0x60, 0x60, 0x60, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x60, 0x60, 0x02, 0x26, 0x26, 0x06 }, 
      { 0x60, 0x60, 0x64, 0x60, 0x10, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00 }, 
      { 0x10, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 19
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x02, 0x60, 0x04 }, 
      { 0x01, 0x00, 0x30, 0x00, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x16 }, 
      { 0x01, 0x01, 0x00, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x06, 0x66, 0x06, 0x16 }, 
      { 0x64, 0x60, 0x60, 0x63, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x20, 0x40, 0x02, 0x26, 0x26, 0x06 }, 
      { 0x60, 0x62, 0x64, 0x60, 0x13, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x06, 0x06 }, 
      { 0x06, 0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x00, 0x06, 0x00, 0x00, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 20
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x01, 0x00, 0x30, 0x30, 0x50, 0x00, 0x00, 0x00 }, 
      { 0x60, 0x10, 0x00, 0x02, 0x21, 0x00, 0x00, 0x16 }, 
      { 0x01, 0x01, 0x00, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x46, 0x66, 0x06, 0x16 }, 
      { 0x64, 0x10, 0x60, 0x63, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x20, 0x40, 0x02, 0x26, 0x26, 0x05 }, 
      { 0x60, 0x62, 0x34, 0x60, 0x13, 0x06, 0x00, 0x06 }, 
      { 0x60, 0x63, 0x63, 0x60, 0x06, 0x62, 0x05, 0x06 }, 
      { 0x06, 0x00, 0x40, 0x00, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x00, 0x06, 0x30, 0x20, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 21
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x01, 0x00, 0x36, 0x30, 0x52, 0x04, 0x00, 0x00 }, 
      { 0x60, 0x10, 0x00, 0x02, 0x21, 0x00, 0x00, 0x16 }, 
      { 0x31, 0x01, 0x03, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x10, 0x50, 0x63, 0x20, 0x06, 0x06, 0x06 }, 
      { 0x40, 0x60, 0x26, 0x40, 0x02, 0x26, 0x26, 0x05 }, 
      { 0x60, 0x62, 0x34, 0x60, 0x13, 0x06, 0x06, 0x06 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x62, 0x05, 0x06 }, 
      { 0x06, 0x00, 0x40, 0x03, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x06, 0x06, 0x30, 0x20, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x30, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 22
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x61, 0x00, 0x36, 0x30, 0x52, 0x04, 0x00, 0x06 }, 
      { 0x60, 0x10, 0x04, 0x02, 0x21, 0x60, 0x00, 0x16 }, 
      { 0x31, 0x01, 0x63, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x60, 0x60, 0x61, 0x60, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x06, 0x06 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x26, 0x26, 0x05 }, 
      { 0x60, 0x62, 0x34, 0x60, 0x13, 0x06, 0x16, 0x06 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x00, 0x41, 0x03, 0x20, 0x00, 0x00, 0x03 }, 
      { 0x00, 0x10, 0x06, 0x56, 0x30, 0x26, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x34, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 23
    100, 
    {
      { 0x40, 0x00, 0x03, 0x03, 0x02, 0x12, 0x60, 0x64 }, 
      { 0x61, 0x00, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x60, 0x10, 0x04, 0x02, 0x21, 0x60, 0x00, 0x16 }, 
      { 0x31, 0x01, 0x63, 0x50, 0x00, 0x01, 0x64, 0x06 }, 
      { 0x62, 0x60, 0x61, 0x62, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x02, 0x06 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x26, 0x26, 0x45 }, 
      { 0x60, 0x62, 0x34, 0x62, 0x13, 0x06, 0x16, 0x66 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x20, 0x60, 0x02, 0x13 }, 
      { 0x00, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x30 }, 
      { 0x16, 0x00, 0x30, 0x34, 0x24, 0x00, 0x02, 0x06 }
    }
  },
  { // 24
    100, 
    {
      { 0x45, 0x00, 0x03, 0x03, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x60, 0x10, 0x04, 0x02, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x01, 0x63, 0x50, 0x00, 0x01, 0x64, 0x03 }, 
      { 0x62, 0x64, 0x61, 0x62, 0x42, 0x56, 0x06, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x02, 0x26 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x60, 0x62, 0x34, 0x62, 0x13, 0x06, 0x16, 0x66 }, 
      { 0x61, 0x63, 0x63, 0x60, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x20, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x30 }, 
      { 0x16, 0x30, 0x30, 0x34, 0x24, 0x01, 0x02, 0x06 }
    }
  },
  { // 25
    100, 
    {
      { 0x45, 0x10, 0x03, 0x03, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x50, 0x13, 0x04, 0x02, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x50, 0x00, 0x01, 0x64, 0x03 }, 
      { 0x62, 0x64, 0x41, 0x62, 0x42, 0x52, 0x03, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x63, 0x20, 0x66, 0x02, 0x26 }, 
      { 0x41, 0x60, 0x26, 0x40, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x10, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x66 }, 
      { 0x61, 0x63, 0x63, 0x10, 0x06, 0x32, 0x05, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x34 }, 
      { 0x16, 0x30, 0x30, 0x34, 0x24, 0x01, 0x02, 0x06 }
    }
  },
  { // 26
    100, 
    {
      { 0x45, 0x10, 0x13, 0x63, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x30, 0x52, 0x04, 0x56, 0x06 }, 
      { 0x50, 0x13, 0x04, 0x02, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x50, 0x02, 0x01, 0x64, 0x03 }, 
      { 0x62, 0x64, 0x41, 0x32, 0x42, 0x52, 0x03, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x23, 0x20, 0x66, 0x32, 0x26 }, 
      { 0x41, 0x66, 0x26, 0x40, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x10, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x66 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x02, 0x32, 0x65, 0x06 }, 
      { 0x06, 0x01, 0x41, 0x03, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x00, 0x34 }, 
      { 0x16, 0x30, 0x30, 0x34, 0x24, 0x01, 0x42, 0x16 }
    }
  },
  { // 27
    100, 
    {
      { 0x45, 0x13, 0x13, 0x63, 0x02, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x01, 0x36, 0x35, 0x52, 0x04, 0x56, 0x46 }, 
      { 0x50, 0x13, 0x04, 0x22, 0x21, 0x63, 0x02, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x50, 0x02, 0x01, 0x64, 0x43 }, 
      { 0x62, 0x64, 0x41, 0x32, 0x42, 0x52, 0x03, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x23, 0x20, 0x66, 0x32, 0x26 }, 
      { 0x41, 0x46, 0x26, 0x45, 0x02, 0x25, 0x26, 0x45 }, 
      { 0x10, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x66 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x32, 0x32, 0x65, 0x46 }, 
      { 0x06, 0x51, 0x41, 0x33, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x01, 0x16, 0x06, 0x56, 0x30, 0x26, 0x06, 0x34 }, 
      { 0x16, 0x35, 0x30, 0x34, 0x24, 0x01, 0x42, 0x16 }
    }
  },
  { // 28
    100, 
    {
      { 0x45, 0x13, 0x13, 0x63, 0x62, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x31, 0x36, 0x35, 0x52, 0x04, 0x56, 0x46 }, 
      { 0x50, 0x13, 0x04, 0x22, 0x21, 0x63, 0x12, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x53, 0x02, 0x21, 0x64, 0x43 }, 
      { 0x62, 0x34, 0x41, 0x32, 0x42, 0x52, 0x63, 0x16 }, 
      { 0x64, 0x12, 0x50, 0x23, 0x21, 0x62, 0x32, 0x26 }, 
      { 0x41, 0x46, 0x26, 0x45, 0x22, 0x25, 0x26, 0x45 }, 
      { 0x16, 0x32, 0x34, 0x62, 0x13, 0x02, 0x16, 0x64 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x32, 0x32, 0x65, 0x46 }, 
      { 0x06, 0x51, 0x41, 0x33, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x41, 0x16, 0x06, 0x56, 0x30, 0x26, 0x06, 0x34 }, 
      { 0x16, 0x35, 0x31, 0x34, 0x24, 0x01, 0x42, 0x16 }
    }
  },
  { // 29
    100, 
    {
      { 0x45, 0x13, 0x13, 0x63, 0x62, 0x12, 0x63, 0x64 }, 
      { 0x61, 0x31, 0x36, 0x35, 0x52, 0x24, 0x56, 0x46 }, 
      { 0x52, 0x13, 0x54, 0x22, 0x21, 0x63, 0x12, 0x16 }, 
      { 0x31, 0x21, 0x63, 0x53, 0x62, 0x21, 0x64, 0x43 }, 
      { 0x62, 0x34, 0x41, 0x32, 0x42, 0x52, 0x63, 0x14 }, 
      { 0x34, 0x12, 0x53, 0x23, 0x21, 0x62, 0x32, 0x26 }, 
      { 0x41, 0x46, 0x26, 0x45, 0x22, 0x25, 0x26, 0x45 }, 
      { 0x16, 0x32, 0x34, 0x22, 0x13, 0x52, 0x16, 0x64 }, 
      { 0x61, 0x13, 0x63, 0x13, 0x32, 0x32, 0x65, 0x46 }, 
      { 0x46, 0x51, 0x41, 0x33, 0x25, 0x64, 0x12, 0x13 }, 
      { 0x41, 0x16, 0x36, 0x56, 0x32, 0x26, 0x56, 0x34 }, 
      { 0x16, 0x35, 0x31, 0x34, 0x24, 0x61, 0x42, 0x16 }
    }
  }
};

struct LedAnim ledAnimation = {
  MAX_LED_FRAMES-1, 
  0,
  FRAME_ACTIVE_FLAG,
  { 0xff, 0xff, 0xff, 0x3f }
};

#endif
