
#include <cstdint>
#include <iostream>
using namespace std;
void print(auto value) {
    cout << value << endl;
}
int main() {
    // unsigned
    uint8_t u8 = 255;
    uint16_t u16 = 65535;
    uint32_t u32 = 4294967295;
    uint64_t u64 = 18446744073709551615U;
    // signed
    int8_t i8 = -128;
    int8_t i8_max = 127;
    int16_t i16 = -32768;
    int16_t i16_max = 32767;
    int32_t int32 = -2147483648;
    int32_t int32_max = 2147483647;
    int64_t int64 = -9223372036854775807LL;
    int64_t int64_max = 9223372036854775807LL;

    // least 
    // signed
    int_least8_t i_least8 = -128;
    int_least8_t i_least8_max = -127;
    int_least16_t i_least16 = -32768;
    int_least16_t i_least16_max = 32767;
    int_least32_t i_least32 = -2147483648;
    int_least32_t i_least32_max = 2147483647;
    int_least64_t i_least64 = -9223372036854775807LL;
    int_least64_t i_least64_max = 9223372036854775807LL;

    // unsigned
    uint_least8_t u_least8 = 255;
    uint_least16_t u_least16 = 65535;
    uint_least32_t u_least32 = 4294967295U;
    uint_least64_t u_least64 = 18446744073709551615ULL;
    // fast
    // signed 
    int_fast8_t i_fast8 = -128;
    int_fast8_t i_fast8_max = 127;
    int_fast16_t i_fast16 = -32768;
    int_fast16_t i_fast16_max = 32767;
    int_fast32_t i_fast32 = -2147483648;
    int_fast32_t i_fast32_max = 2147483647;
    int_fast64_t i_fast64 = -9223372036854775807LL;
    int_fast64_t i_fast64_max = 9223372036854775807LL;

    // unsigned
    uint_fast8_t u_fast8 = 255;
    uint_fast16_t u_fast16 = 65535;
    uint_fast32_t u_fast32 = 4294967295U;
    uint_fast64_t u_fast64 = 18446744073709551615ULL;

    // max
    // signed
    intmax_t i_max = -9223372036854775807LL;
    intmax_t int_max_max = 9223372036854775807LL;
/*
    INT8_MAX i8_max = 127;
    INT8_MAX i8_min = -128;
    INT16_MAX i16_max = 32767;
    INT16_MAX int16_min = -32768;
    INT32_MAX int32_max = 2147483647;
    INT32_MAX int32_min = -2147483648;
    INT64_MAX int64_max = 9223372036854775807LL;
    INT64_MAX int64_min = -9223372036854775807LL;

    // unsigned
    UINT8_MAX u8_max = 255;
    UINT16_MAX u16_max = 65535;
    UINT32_MAX u32_max = 4294967295U;
    UINT64_MAX u64_max = 18446744073709551615ULL;
    */

    // INTPTR_T
    int pointer = 32;
    int *ptr = &pointer;
    intptr_t intptr = reinterpret_cast<intptr_t>(ptr);

    // print
    print(u8);
    print(u16);
    print(u32);
    print(u64);
    print(i8);
    print(i8_max);
    print(i16);
    print(i16_max);
    print(int32);
    print(int32_max);
    print(int64);
    print(int64_max);
    print(i_least8);
    print(i_least8_max);
    print(i_least16);
    print(i_least16_max);
    print(i_least32);
    print(i_least32_max);
    print(i_least64);
    print(i_least64_max);
    print(u_least8);
    print(u_least16);
    print(u_least32);
    print(u_least64);
    print(i_fast8);
    print(i_fast8_max);
    print(i_fast16);
    print(i_fast16_max);
    print(i_fast32);
    print(i_fast32_max);
    print(i_fast64);
    print(i_fast64_max);
    print(u_fast8);
    print(u_fast16);
    print(u_fast32);
    print(u_fast64);
    print(i_max);
    print(int_max_max);
    print(intptr);
}