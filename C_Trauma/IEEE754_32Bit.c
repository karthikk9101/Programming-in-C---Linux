#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void print_ieee754_float(float value) {
    // Type punning via union to read raw bit representation
    union {
        float f;
        uint32_t u;
    } num;

    num.f = value;

    uint32_t sign = (num.u >> 31) & 0x01;
    uint32_t exponent = (num.u >> 23) & 0xFF;
    uint32_t mantissa = num.u & 0x7FFFFF;

    printf("\n----------------------------------------\n");
    printf("Input Value : %f\n", value);
    printf("Hexadecimal : 0x%08X\n", num.u);
    printf("Binary Layout: ");

    // Sign bit (1 bit)
    printf("%u | ", sign);

    // Exponent (8 bits)
    for (int i = 7; i >= 0; i--) {
        printf("%u", (exponent >> i) & 1);
    }
    printf(" | ");

    // Mantissa/Fraction (23 bits)
    for (int i = 22; i >= 0; i--) {
        printf("%u", (mantissa >> i) & 1);
    }
    printf("\n");

    printf("Fields      : Sign=%u, Biased Exp=%u (Unbiased=%d), Mantissa=0x%06X\n",
           sign, exponent, (int)exponent - 127, mantissa);
    printf("----------------------------------------\n\n");
}

int main(void) {
    float input_val;
    int result;

    printf("=== IEEE 754 32-Bit Single Precision Converter ===\n");

    while (1) {
        printf("Enter a number (positive, negative, integer, or decimal, 'q' to quit): ");
        
        // Read input and check if valid float format was provided
        result = scanf("%f", &input_val);

        if (result != 1) {
            printf("Exiting program.\n");
            break;
        }

        print_ieee754_float(input_val);
    }

    return 0;
}