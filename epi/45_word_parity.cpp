/* bitmask magic */

short Parity(unsigned long x) {
  short result = 0;
  while (x) {
    // result ^= (x & 1);
    // x >>= 1;
    result ^= 1;
    x &= (x - 1);
  }
  return result;
}

// bitmask method to find rightmost 1
//            x = 00101100
//        x - 1 = 00101011
//     ~(x - 1) = 11010100
// x & ~(x - 1) = 00000100

//  x & (x - 1) = 00101000

// result after successive ^'s:
// 00000001
// 00000000
// 00000001
// 00000000
// 00000001
// ...