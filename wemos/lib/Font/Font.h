#pragma once

#define TOTAL 2048

const uint8_t font [TOTAL] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x5f, 0x5f, 0x06, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00,
  0x03, 0x03, 0x00, 0x00, 0x14, 0x7f, 0x7f, 0x14, 0x7f, 0x7f, 0x14, 0x00,
  0x24, 0x2e, 0x6b, 0x6b, 0x3a, 0x12, 0x00, 0x00, 0x46, 0x66, 0x30, 0x18,
  0x0c, 0x66, 0x62, 0x00, 0x30, 0x7a, 0x4f, 0x5d, 0x37, 0x7a, 0x48, 0x00,
  0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x3e, 0x63,
  0x41, 0x00, 0x00, 0x00, 0x00, 0x41, 0x63, 0x3e, 0x1c, 0x00, 0x00, 0x00,
  0x08, 0x2a, 0x3e, 0x1c, 0x1c, 0x3e, 0x2a, 0x08, 0x08, 0x08, 0x3e, 0x3e,
  0x08, 0x08, 0x00, 0x00, 0x00, 0x80, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00,
  0x3e, 0x7f, 0x71, 0x59, 0x4d, 0x7f, 0x3e, 0x00, 0x40, 0x42, 0x7f, 0x7f,
  0x40, 0x40, 0x00, 0x00, 0x62, 0x73, 0x59, 0x49, 0x6f, 0x66, 0x00, 0x00,
  0x22, 0x63, 0x49, 0x49, 0x7f, 0x36, 0x00, 0x00, 0x18, 0x1c, 0x16, 0x53,
  0x7f, 0x7f, 0x50, 0x00, 0x27, 0x67, 0x45, 0x45, 0x7d, 0x39, 0x00, 0x00,
  0x3c, 0x7e, 0x4b, 0x49, 0x79, 0x30, 0x00, 0x00, 0x03, 0x03, 0x71, 0x79,
  0x0f, 0x07, 0x00, 0x00, 0x36, 0x7f, 0x49, 0x49, 0x7f, 0x36, 0x00, 0x00,
  0x06, 0x4f, 0x49, 0x69, 0x3f, 0x1e, 0x00, 0x00, 0xc1, 0xc1, 0x66, 0x66,
  0x00, 0x00, 0x00, 0x81, 0x00, 0x80, 0xe6, 0x66, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x1c, 0x36, 0x63, 0x41, 0x00, 0x00, 0x00, 0x24, 0x24, 0x24, 0x24,
  0x24, 0x24, 0x00, 0x00, 0x00, 0x41, 0x63, 0x36, 0x1c, 0x08, 0x00, 0x00,
  0x02, 0x03, 0x51, 0x59, 0x0f, 0x06, 0x00, 0x00, 0x3e, 0x7f, 0x41, 0x5d,
  0x5d, 0x1f, 0x1e, 0x00, 0x7c, 0x7e, 0x13, 0x13, 0x7e, 0x7c, 0x00, 0x00,
  0x41, 0x7f, 0x7f, 0x49, 0x49, 0x7f, 0x36, 0x00, 0x1c, 0x3e, 0x63, 0x41,
  0x41, 0x63, 0x22, 0x00, 0x41, 0x7f, 0x7f, 0x41, 0x63, 0x3e, 0x1c, 0x00,
  0x41, 0x7f, 0x7f, 0x49, 0x5d, 0x41, 0x63, 0x00, 0x41, 0x7f, 0x7f, 0x49,
  0x1d, 0x01, 0x03, 0x00, 0x1c, 0x3e, 0x63, 0x41, 0x51, 0x73, 0x72, 0x00,
  0x7f, 0x7f, 0x08, 0x08, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x41, 0x7f, 0x7f,
  0x41, 0x00, 0x00, 0x00, 0x30, 0x70, 0x40, 0x41, 0x7f, 0x3f, 0x01, 0x00,
  0x41, 0x7f, 0x7f, 0x08, 0x1c, 0x77, 0x63, 0x00, 0x41, 0x7f, 0x7f, 0x41,
  0x40, 0x60, 0x70, 0x00, 0x7f, 0x7f, 0x0e, 0x1c, 0x0e, 0x7f, 0x7f, 0x00,
  0x7f, 0x7f, 0x06, 0x0c, 0x18, 0x7f, 0x7f, 0x00, 0x1c, 0x3e, 0x63, 0x41,
  0x63, 0x3e, 0x1c, 0x00, 0x41, 0x7f, 0x7f, 0x49, 0x09, 0x0f, 0x06, 0x00,
  0x1e, 0x3f, 0x21, 0x71, 0x7f, 0x5e, 0x00, 0x00, 0x41, 0x7f, 0x7f, 0x09,
  0x19, 0x7f, 0x66, 0x00, 0x26, 0x6f, 0x4d, 0x59, 0x73, 0x32, 0x00, 0x00,
  0x03, 0x41, 0x7f, 0x7f, 0x41, 0x03, 0x00, 0x00, 0x7f, 0x7f, 0x40, 0x40,
  0x7f, 0x7f, 0x00, 0x00, 0x1f, 0x3f, 0x60, 0x60, 0x3f, 0x1f, 0x00, 0x00,
  0x7f, 0x7f, 0x30, 0x18, 0x30, 0x7f, 0x7f, 0x00, 0x43, 0x67, 0x3c, 0x18,
  0x3c, 0x67, 0x43, 0x00, 0x07, 0x4f, 0x78, 0x78, 0x4f, 0x07, 0x00, 0x00,
  0x47, 0x63, 0x71, 0x59, 0x4d, 0x67, 0x73, 0x00, 0x00, 0x7f, 0x7f, 0x41,
  0x41, 0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00,
  0x00, 0x41, 0x41, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x06, 0x03,
  0x06, 0x0c, 0x08, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00, 0x20, 0x74, 0x54, 0x54,
  0x3c, 0x78, 0x40, 0x00, 0x41, 0x7f, 0x3f, 0x48, 0x48, 0x78, 0x30, 0x00,
  0x38, 0x7c, 0x44, 0x44, 0x6c, 0x28, 0x00, 0x00, 0x30, 0x78, 0x48, 0x49,
  0x3f, 0x7f, 0x40, 0x00, 0x38, 0x7c, 0x54, 0x54, 0x5c, 0x18, 0x00, 0x00,
  0x48, 0x7e, 0x7f, 0x49, 0x03, 0x02, 0x00, 0x00, 0x98, 0xbc, 0xa4, 0xa4,
  0xf8, 0x7c, 0x04, 0x00, 0x41, 0x7f, 0x7f, 0x08, 0x04, 0x7c, 0x78, 0x00,
  0x00, 0x44, 0x7d, 0x7d, 0x40, 0x00, 0x00, 0x00, 0x60, 0xe0, 0x80, 0x80,
  0xfd, 0x7d, 0x00, 0x00, 0x41, 0x7f, 0x7f, 0x10, 0x38, 0x6c, 0x44, 0x00,
  0x00, 0x41, 0x7f, 0x7f, 0x40, 0x00, 0x00, 0x00, 0x7c, 0x7c, 0x18, 0x38,
  0x1c, 0x7c, 0x78, 0x00, 0x7c, 0x7c, 0x04, 0x04, 0x7c, 0x78, 0x00, 0x00,
  0x38, 0x7c, 0x44, 0x44, 0x7c, 0x38, 0x00, 0x00, 0x84, 0xfc, 0xf8, 0xa4,
  0x24, 0x3c, 0x18, 0x00, 0x18, 0x3c, 0x24, 0xa4, 0xf8, 0xfc, 0x84, 0x00,
  0x44, 0x7c, 0x78, 0x4c, 0x04, 0x1c, 0x18, 0x00, 0x48, 0x5c, 0x54, 0x54,
  0x74, 0x24, 0x00, 0x00, 0x00, 0x04, 0x3e, 0x7f, 0x44, 0x24, 0x00, 0x00,
  0x3c, 0x7c, 0x40, 0x40, 0x3c, 0x7c, 0x40, 0x00, 0x1c, 0x3c, 0x60, 0x60,
  0x3c, 0x1c, 0x00, 0x00, 0x3c, 0x7c, 0x70, 0x38, 0x70, 0x7c, 0x3c, 0x00,
  0x44, 0x6c, 0x38, 0x10, 0x38, 0x6c, 0x44, 0x00, 0x9c, 0xbc, 0xa0, 0xa0,
  0xfc, 0x7c, 0x00, 0x00, 0x4c, 0x64, 0x74, 0x5c, 0x4c, 0x64, 0x00, 0x00,
  0x08, 0x08, 0x3e, 0x77, 0x41, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77,
  0x77, 0x00, 0x00, 0x00, 0x41, 0x41, 0x77, 0x3e, 0x08, 0x08, 0x00, 0x00,
  0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7b, 0x7b, 0x00, 0x00, 0x00,
  0x18, 0x3c, 0x24, 0xe7, 0xe7, 0x24, 0x24, 0x00, 0x68, 0x7e, 0x7f, 0x49,
  0x43, 0x66, 0x20, 0x00, 0x44, 0x7c, 0x38, 0x28, 0x38, 0x7c, 0x44, 0x00,
  0x2b, 0x2f, 0xfc, 0xfc, 0x2f, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77,
  0x77, 0x00, 0x00, 0x00, 0x40, 0xda, 0xbf, 0xa5, 0xfd, 0x59, 0x03, 0x02,
  0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x3c, 0x42, 0x99, 0xa5,
  0xa5, 0x81, 0x42, 0x3c, 0x00, 0x06, 0x0f, 0x09, 0x0f, 0x0f, 0x08, 0x00,
  0x08, 0x1c, 0x36, 0x22, 0x08, 0x1c, 0x36, 0x22, 0x08, 0x08, 0x08, 0x08,
  0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3c, 0x42, 0xbd, 0x95, 0x95, 0xa9, 0x42, 0x3c, 0x00, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x00, 0x00, 0x06, 0x0f, 0x09, 0x0f, 0x06, 0x00, 0x00,
  0x00, 0x44, 0x44, 0x5f, 0x5f, 0x44, 0x44, 0x00, 0x00, 0x00, 0x19, 0x1d,
  0x17, 0x12, 0x00, 0x00, 0x00, 0x00, 0x11, 0x15, 0x1f, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x03, 0x01, 0x00, 0x00, 0x00, 0x80, 0xfc, 0x7c, 0x20,
  0x20, 0x3c, 0x1c, 0x00, 0x06, 0x0f, 0x09, 0x7f, 0x7f, 0x01, 0x7f, 0x7f,
  0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xa0,
  0xe0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0f, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x06, 0x0f, 0x09, 0x0f, 0x06, 0x00, 0x00, 0x22, 0x36, 0x1c, 0x08,
  0x22, 0x36, 0x1c, 0x08, 0xcf, 0xe7, 0x38, 0x18, 0x6c, 0x7e, 0x73, 0x79,
  0x4f, 0x6f, 0x30, 0x18, 0xcc, 0xee, 0xbb, 0x91, 0x15, 0x55, 0x6a, 0x30,
  0x18, 0x6c, 0x56, 0xfa, 0x30, 0x78, 0x4d, 0x45, 0x60, 0x20, 0x00, 0x00,
  0x71, 0x79, 0x2d, 0x24, 0x2c, 0x78, 0x70, 0x00, 0x70, 0x78, 0x2c, 0x24,
  0x2d, 0x79, 0x71, 0x00, 0x70, 0x7a, 0x2b, 0x29, 0x2b, 0x7a, 0x70, 0x00,
  0x72, 0x7b, 0x29, 0x2b, 0x2a, 0x7b, 0x71, 0x00, 0x79, 0x7d, 0x16, 0x12,
  0x16, 0x7d, 0x79, 0x00, 0x70, 0x78, 0x2b, 0x2b, 0x78, 0x70, 0x00, 0x00,
  0x7c, 0x7e, 0x0b, 0x09, 0x7f, 0x7f, 0x49, 0x00, 0x0e, 0x9f, 0x91, 0xb1,
  0xfb, 0x4a, 0x00, 0x00, 0x45, 0x7d, 0x7d, 0x54, 0x54, 0x44, 0x00, 0x00,
  0x44, 0x7c, 0x7c, 0x55, 0x55, 0x45, 0x00, 0x00, 0x44, 0x7e, 0x7d, 0x55,
  0x56, 0x44, 0x00, 0x00, 0x44, 0x7d, 0x7d, 0x54, 0x55, 0x45, 0x00, 0x00,
  0x01, 0x45, 0x7d, 0x7c, 0x44, 0x00, 0x00, 0x00, 0x00, 0x44, 0x7c, 0x7d,
  0x45, 0x01, 0x00, 0x00, 0x00, 0x4a, 0x79, 0x79, 0x4a, 0x00, 0x00, 0x00,
  0x01, 0x45, 0x7c, 0x7c, 0x45, 0x01, 0x00, 0x00, 0x4d, 0x7f, 0x7f, 0x4d,
  0x41, 0x7f, 0x3e, 0x00, 0x7d, 0x7d, 0x19, 0x31, 0x7d, 0x7d, 0x00, 0x00,
  0x00, 0x11, 0x39, 0x6d, 0x6c, 0x38, 0x10, 0x00, 0x00, 0x10, 0x38, 0x6c,
  0x6d, 0x39, 0x11, 0x00, 0x00, 0x12, 0x3b, 0x6d, 0x6d, 0x3b, 0x12, 0x00,
  0x32, 0x7b, 0x49, 0x4b, 0x4a, 0x7b, 0x31, 0x00, 0x01, 0x19, 0x3c, 0x66,
  0x66, 0x3c, 0x19, 0x01, 0x00, 0x22, 0x36, 0x1c, 0x36, 0x22, 0x00, 0x00,
  0x5c, 0x3e, 0x73, 0x59, 0x6f, 0x3e, 0x1d, 0x00, 0x00, 0x3d, 0x7d, 0x41,
  0x40, 0x7c, 0x3c, 0x00, 0x00, 0x3c, 0x7c, 0x40, 0x41, 0x7d, 0x3d, 0x00,
  0x00, 0x3a, 0x7b, 0x41, 0x41, 0x7b, 0x3a, 0x00, 0x3d, 0x7d, 0x40, 0x40,
  0x7d, 0x3d, 0x00, 0x00, 0x00, 0x0c, 0x1c, 0x70, 0x71, 0x1d, 0x0d, 0x00,
  0x81, 0xff, 0xff, 0xa5, 0x24, 0x3c, 0x18, 0x00, 0xfc, 0xfe, 0x2a, 0x2a,
  0x3e, 0x14, 0x00, 0x00, 0x21, 0x75, 0x55, 0x54, 0x7c, 0x78, 0x40, 0x00,
  0x20, 0x74, 0x54, 0x55, 0x7d, 0x79, 0x40, 0x00, 0x02, 0x23, 0x75, 0x55,
  0x55, 0x7d, 0x7b, 0x42, 0x22, 0x77, 0x55, 0x57, 0x7e, 0x7b, 0x41, 0x00,
  0x21, 0x75, 0x54, 0x54, 0x7d, 0x79, 0x40, 0x00, 0x20, 0x74, 0x57, 0x57,
  0x7c, 0x78, 0x40, 0x00, 0x20, 0x74, 0x54, 0x54, 0x7c, 0x7c, 0x54, 0x54,
  0x18, 0x3c, 0xa4, 0xa4, 0xe4, 0x40, 0x00, 0x00, 0x39, 0x7d, 0x55, 0x54,
  0x5c, 0x18, 0x00, 0x00, 0x38, 0x7c, 0x54, 0x55, 0x5d, 0x19, 0x00, 0x00,
  0x02, 0x3b, 0x7d, 0x55, 0x55, 0x5d, 0x1b, 0x02, 0x39, 0x7d, 0x54, 0x54,
  0x5d, 0x19, 0x00, 0x00, 0x01, 0x45, 0x7d, 0x7c, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x44, 0x7d, 0x7d, 0x41, 0x00, 0x00, 0x00, 0x02, 0x03, 0x45, 0x7d,
  0x7d, 0x43, 0x02, 0x00, 0x01, 0x45, 0x7c, 0x7c, 0x41, 0x01, 0x00, 0x00,
  0x25, 0x77, 0x52, 0x57, 0x7d, 0x38, 0x00, 0x00, 0x7a, 0x7a, 0x0a, 0x0a,
  0x7a, 0x70, 0x00, 0x00, 0x32, 0x7a, 0x4a, 0x48, 0x78, 0x30, 0x00, 0x00,
  0x30, 0x78, 0x48, 0x4a, 0x7a, 0x32, 0x00, 0x00, 0x32, 0x7b, 0x49, 0x49,
  0x7b, 0x32, 0x00, 0x00, 0x32, 0x7b, 0x49, 0x4b, 0x7a, 0x33, 0x01, 0x00,
  0x32, 0x7a, 0x48, 0x48, 0x7a, 0x32, 0x00, 0x00, 0x00, 0x08, 0x08, 0x6b,
  0x6b, 0x08, 0x08, 0x00, 0x00, 0xb8, 0xfc, 0x74, 0x5c, 0x7e, 0x3a, 0x00,
  0x3a, 0x7a, 0x42, 0x40, 0x78, 0x78, 0x40, 0x00, 0x38, 0x78, 0x40, 0x42,
  0x7a, 0x7a, 0x40, 0x00, 0x3a, 0x7b, 0x41, 0x41, 0x7b, 0x7a, 0x40, 0x00,
  0x3a, 0x7a, 0x40, 0x40, 0x7a, 0x7a, 0x40, 0x00, 0x98, 0xb8, 0xa0, 0xa2,
  0xfa, 0x7a, 0x00, 0x00, 0x00, 0x7c, 0x7c, 0x28, 0x28, 0x38, 0x10, 0x00,
  0x9a, 0xba, 0xa0, 0xa0, 0xfa, 0x7a, 0x00, 0x00
};

// Cada fila representa la configuración de cada sprite.
// Y cada columna representa un valor de la configuración.
// 1 = SpritesCount;
// 2 = fpms;
// 3 = El primer indice en el siguiente arreglo.
const uint16_t predefined_config[3][3] = {
	{2, 500, 0},
	{2, 500, 2},
	{6, 166, 4}
};

const uint8_t predefined_values[10] [8] = {
	{0x00, 0x20, 0x46, 0x40, 0x40, 0x46, 0x20, 0x00},
	{0x08, 0x10, 0x26, 0x20, 0xE0, 0xA6, 0xF0, 0x08},
	
	{0x3C, 0x42, 0x81, 0x81, 0x99, 0xA5, 0x42, 0x00},
	{0x3C, 0x42, 0x81, 0x81, 0x91, 0x91, 0x52, 0x3C},
	
	{0x18, 0x24, 0x44, 0x88, 0x44, 0x24, 0x18, 0x00},
	{0x18, 0x3C, 0x44, 0x88, 0x44, 0x24, 0x18, 0x00},
	{0x18, 0x3C, 0x7C, 0x88, 0x44, 0x24, 0x18, 0x00},
	{0x18, 0x3C, 0x7C, 0xF8, 0x44, 0x24, 0x18, 0x00},
	{0x18, 0x3C, 0x7C, 0xF8, 0x7C, 0x24, 0x18, 0x00},
	{0x18, 0x3C, 0x7C, 0xF8, 0x7C, 0x3C, 0x18, 0x00}
};