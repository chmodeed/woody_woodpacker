unsigned char patch[] = {
  0x31, 0xc0, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8d, 0x35, 0x6f, 0x00,
  0x00, 0x00, 0xba, 0x0e, 0x00, 0x00, 0x00, 0xb8, 0x01, 0x00, 0x00, 0x00,
  0x0f, 0x05, 0xb8, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x05, 0x48, 0x8d, 0x04,
  0x25, 0x8b, 0x00, 0x00, 0x00, 0x48, 0x03, 0x04, 0x25, 0x8b, 0x00, 0x00,
  0x00, 0x48, 0x2b, 0x04, 0x25, 0x9b, 0x00, 0x00, 0x00, 0x48, 0x2d, 0x8b,
  0x00, 0x00, 0x00, 0x50, 0x48, 0x8d, 0x3c, 0x25, 0x8f, 0x00, 0x00, 0x00,
  0x48, 0x03, 0x3c, 0x25, 0x8f, 0x00, 0x00, 0x00, 0x48, 0x2b, 0x3c, 0x25,
  0x9b, 0x00, 0x00, 0x00, 0x48, 0x81, 0xef, 0x9b, 0x00, 0x00, 0x00, 0x48,
  0x8b, 0x0c, 0x25, 0x93, 0x00, 0x00, 0x00, 0x48, 0x8b, 0x04, 0x25, 0x97,
  0x00, 0x00, 0x00, 0x30, 0x07, 0x48, 0xd1, 0xc8, 0x48, 0x83, 0xc7, 0x01,
  0xe2, 0xf5, 0xf7, 0xe1, 0xc3, 0x2e, 0x2e, 0x2e, 0x2e, 0x57, 0x4f, 0x4f,
  0x44, 0x59, 0x2e, 0x2e, 0x2e, 0x2e, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00
};
unsigned int patch_len = 159;