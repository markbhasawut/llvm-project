/* Helper methods for builtin intrinsic tests */

#include <immintrin.h>

#if defined(__cplusplus) && (__cplusplus >= 201103L)

constexpr bool match_m64(__m64 _v, unsigned long long a) {
  __v1du v = (__v1du)_v;
  return v[0] == a;
}

constexpr bool match_v1di(__m64 v, long long a) {
  return v[0] == a;
}

constexpr bool match_v2si(__m64 _v, int a, int b) {
  __v2si v = (__v2si)_v;
  return v[0] == a && v[1] == b;
}

constexpr bool match_v4hi(__m64 _v, short a, short b, short c, short d) {
  __v4hi v = (__v4hi)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d;
}

constexpr bool match_v8qi(__m64 _v, char a, char b, char c, char d, char e, char f, char g, char h) {
  __v8qi v = (__v8qi)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h;
}

constexpr bool match_m128(__m128 v, float a, float b, float c, float d) {
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d;
}

constexpr bool match_m128d(__m128d v, double a, double b) {
  return v[0] == a && v[1] == b;
}

constexpr bool match_m128i(__m128i _v, unsigned long long a, unsigned long long b) {
  __v2du v = (__v2du)_v;
  return v[0] == a && v[1] == b;
}

constexpr bool match_v2di(__m128i v, long long a, long long b) {
  return v[0] == a && v[1] == b;
}

constexpr bool match_v4si(__m128i _v, int a, int b, int c, int d) {
  __v4si v = (__v4si)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d;
}

constexpr bool match_v8hi(__m128i _v, short a, short b, short c, short d, short e, short f, short g, short h) {
  __v8hi v = (__v8hi)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h;
}

constexpr bool match_v16qi(__m128i _v, char a, char b, char c, char d, char e, char f, char g, char h, char i, char j, char k, char l, char m, char n, char o, char p) {
  __v16qi v = (__v16qi)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h && v[8] == i && v[9] == j && v[10] == k && v[11] == l && v[12] == m && v[13] == n && v[14] == o && v[15] == p;
}

constexpr bool match_m256(__m256 v, float a, float b, float c, float d, float e, float f, float g, float h) {
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h;
}

constexpr bool match_m256d(__m256d v, double a, double b, double c, double d) {
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d;
}

constexpr bool match_m256i(__m256i _v, unsigned long long a, unsigned long long b, unsigned long long c, unsigned long long d) {
  __v4du v = (__v4du)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d;
}

constexpr bool match_v4di(__m256i _v, long long a, long long b, long long c, long long d) {
  __v4di v = (__v4di)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d;
}

constexpr bool match_v8si(__m256i _v, int a, int b, int c, int d, int e, int f, int g, int h) {
  __v8si v = (__v8si)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h;
}

constexpr bool match_v16hi(__m256i _v, short a, short b, short c, short d, short e, short f, short g, short h, short i, short j, short k, short l, short m, short n, short o, short p) {
  __v16hi v = (__v16hi)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h && v[8] == i && v[9] == j && v[10] == k && v[11] == l && v[12] == m && v[13] == n && v[14] == o && v[15] == p;
}

constexpr bool match_v32qi(__m256i _v, char __b00, char __b01, char __b02, char __b03, char __b04, char __b05, char __b06, char __b07,
                                       char __b08, char __b09, char __b10, char __b11, char __b12, char __b13, char __b14, char __b15,
                                       char __b16, char __b17, char __b18, char __b19, char __b20, char __b21, char __b22, char __b23,
                                       char __b24, char __b25, char __b26, char __b27, char __b28, char __b29, char __b30, char __b31) {
  __v32qi v = (__v32qi)_v;
  return v[ 0] == __b00 && v[ 1] == __b01 && v[ 2] == __b02 && v[ 3] == __b03 && v[ 4] == __b04 && v[ 5] == __b05 && v[ 6] == __b06 && v[ 7] ==  __b07 &&
         v[ 8] == __b08 && v[ 9] == __b09 && v[10] == __b10 && v[11] == __b11 && v[12] == __b12 && v[13] == __b13 && v[14] == __b14 && v[15] ==  __b15 &&
         v[16] == __b16 && v[17] == __b17 && v[18] == __b18 && v[19] == __b19 && v[20] == __b20 && v[21] == __b21 && v[22] == __b22 && v[23] ==  __b23 &&
         v[24] == __b24 && v[25] == __b25 && v[26] == __b26 && v[27] == __b27 && v[28] == __b28 && v[29] == __b29 && v[30] == __b30 && v[31] ==  __b31;
}

constexpr bool match_m512(__m512 v, float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p) {
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h && v[8] == i && v[9] == j && v[10] == k && v[11] == l && v[12] == m && v[13] == n && v[14] == o && v[15] == p;
}

constexpr bool match_m512d(__m512d v, double a, double b, double c, double d, double e, double f, double g, double h) {
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h;
}

constexpr bool match_m512i(__m512i _v, unsigned long long a, unsigned long long b, unsigned long long c, unsigned long long d, unsigned long long e, unsigned long long f, unsigned long long g, unsigned long long h) {
  __v8du v = (__v8du)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h;
}

constexpr bool match_v8di(__m512i _v, long long a, long long b, long long c, long long d, long long e, long long f, long long g, long long h) {
  __v8di v = (__v8di)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h;
}

constexpr bool match_v16si(__m512i _v, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p) {
  __v16si v = (__v16si)_v;
  return v[0] == a && v[1] == b && v[2] == c && v[3] == d && v[4] == e && v[5] == f && v[6] == g && v[7] == h && v[8] == i && v[9] == j && v[10] == k && v[11] == l && v[12] == m && v[13] == n && v[14] == o && v[15] == p;
}

constexpr bool match_v32hi(__m512i _v, short __b00, short __b01, short __b02, short __b03, short __b04, short __b05, short __b06, short __b07,
                                       short __b08, short __b09, short __b10, short __b11, short __b12, short __b13, short __b14, short __b15,
                                       short __b16, short __b17, short __b18, short __b19, short __b20, short __b21, short __b22, short __b23,
                                       short __b24, short __b25, short __b26, short __b27, short __b28, short __b29, short __b30, short __b31) {
  __v32hi v = (__v32hi)_v;
  return v[ 0] == __b00 && v[ 1] == __b01 && v[ 2] == __b02 && v[ 3] == __b03 && v[ 4] == __b04 && v[ 5] == __b05 && v[ 6] == __b06 && v[ 7] ==  __b07 &&
         v[ 8] == __b08 && v[ 9] == __b09 && v[10] == __b10 && v[11] == __b11 && v[12] == __b12 && v[13] == __b13 && v[14] == __b14 && v[15] ==  __b15 &&
         v[16] == __b16 && v[17] == __b17 && v[18] == __b18 && v[19] == __b19 && v[20] == __b20 && v[21] == __b21 && v[22] == __b22 && v[23] ==  __b23 &&
         v[24] == __b24 && v[25] == __b25 && v[26] == __b26 && v[27] == __b27 && v[28] == __b28 && v[29] == __b29 && v[30] == __b30 && v[31] ==  __b31;
}

constexpr bool match_v64qi(__m512i _v, char __b00, char __b01, char __b02, char __b03, char __b04, char __b05, char __b06, char __b07,
                                       char __b08, char __b09, char __b10, char __b11, char __b12, char __b13, char __b14, char __b15,
                                       char __b16, char __b17, char __b18, char __b19, char __b20, char __b21, char __b22, char __b23,
                                       char __b24, char __b25, char __b26, char __b27, char __b28, char __b29, char __b30, char __b31,
                                       char __b32, char __b33, char __b34, char __b35, char __b36, char __b37, char __b38, char __b39,
                                       char __b40, char __b41, char __b42, char __b43, char __b44, char __b45, char __b46, char __b47,
                                       char __b48, char __b49, char __b50, char __b51, char __b52, char __b53, char __b54, char __b55,
                                       char __b56, char __b57, char __b58, char __b59, char __b60, char __b61, char __b62, char __b63) {
  __v64qi v = (__v64qi)_v;
  return v[ 0] == __b00 && v[ 1] == __b01 && v[ 2] == __b02 && v[ 3] == __b03 && v[ 4] == __b04 && v[ 5] == __b05 && v[ 6] == __b06 && v[ 7] ==  __b07 &&
         v[ 8] == __b08 && v[ 9] == __b09 && v[10] == __b10 && v[11] == __b11 && v[12] == __b12 && v[13] == __b13 && v[14] == __b14 && v[15] ==  __b15 &&
         v[16] == __b16 && v[17] == __b17 && v[18] == __b18 && v[19] == __b19 && v[20] == __b20 && v[21] == __b21 && v[22] == __b22 && v[23] ==  __b23 &&
         v[24] == __b24 && v[25] == __b25 && v[26] == __b26 && v[27] == __b27 && v[28] == __b28 && v[29] == __b29 && v[30] == __b30 && v[31] ==  __b31 &&
         v[32] == __b32 && v[33] == __b33 && v[34] == __b34 && v[35] == __b35 && v[36] == __b36 && v[37] == __b37 && v[38] == __b38 && v[39] ==  __b39 &&
         v[40] == __b40 && v[41] == __b41 && v[42] == __b42 && v[43] == __b43 && v[44] == __b44 && v[45] == __b45 && v[46] == __b46 && v[47] ==  __b47 &&
         v[48] == __b48 && v[49] == __b49 && v[50] == __b50 && v[51] == __b51 && v[52] == __b52 && v[53] == __b53 && v[54] == __b54 && v[55] ==  __b55 &&
         v[56] == __b56 && v[57] == __b57 && v[58] == __b58 && v[59] == __b59 && v[60] == __b60 && v[61] == __b61 && v[62] == __b62 && v[63] ==  __b63;
}

#define TEST_CONSTEXPR(...) static_assert(__VA_ARGS__)

#else

#define TEST_CONSTEXPR(...)

#endif
