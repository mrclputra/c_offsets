#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// thanks Ian! 
// Rustaceans are happy...
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef i8 b8;
typedef i32 b32;

typedef float f32;
typedef double f64;

typedef struct {
    f32 x;
    f32 y;
} vec2f;

int main() {
    // integer offsets 4 bytes
    i32 inums[] = {1, 2, 3, 4, 5};
    for (u32 i = 0; i < 5; i++) {
        printf("%d | %u\n", inums[i], &inums[i]);
    }
    printf("\n");
    
    // float offsets should be equivalent 4 bytes 
    // IEEE 754
    f32 fnums[] = {1, 2, 3, 4, 5};
    for (u32 i = 0; i < 5; i++) {
        printf("%f | %u\n", fnums[i], &fnums[i]);
    }
    printf("\n");

    // doubles are 8 bytes
    f64 dnums[] = {1, 2, 3, 4, 5};
    for (u32 i = 0; i < 5; i++) {
        printf("%f | %u\n", dnums[i], &dnums[i]);
    }
    printf("\n");

    // characters should be 1 byte though
    char chars[] = "Hello\n";
    for (u32 i = 0; chars[i] != '\n'; i++) {
        printf("%c | %u\n", chars[i], &chars[i]);
    }
    printf("\n");

    return 0;
}