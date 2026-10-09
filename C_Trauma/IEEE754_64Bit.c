#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void print_ieee754_double(double value) {
    // Type punning via union to read raw 64-bit representation safely
    union {
        double d;
        uint64_t u;
    } num;

    num.d = value;

    uint64_t sign = (num.u >> 63) & 0x01;
    uint64_t exponent = (num.u >> 52) & 0x7FF;
    uint64_t mantissa = num.u & 0xFFFFFFFFFFFFF; // Lower 52 bits

    printf("\n--------------------------------------------------------------------------------\n");
    printf("Input Value  : %lf\n", value);
    printf("Hexadecimal  : 0x%016lX\n", num.u);
    printf("Binary Layout: ");

    // Sign bit (1 bit)
    printf("%lu | ", sign);

    // Exponent (11 bits)
    for (int i = 10; i >= 0; i--) {
        printf("%lu", (exponent >> i) & 1);
    }
    printf(" | ");

    // Mantissa/Fraction (52 bits)
    for (int i = 51; i >= 0; i--) {
        printf("%lu", (mantissa >> i) & 1);
    }
    printf("\n");

    printf("Fields       : Sign=%lu, Biased Exp=%lu (Unbiased=%ld), Mantissa=0x%013lX\n",
           sign, exponent, (long)exponent - 1023, mantissa);
    printf("--------------------------------------------------------------------------------\n\n");
}

int main(void) {
    double input_val;
    int result;

    printf("=== IEEE 754 64-Bit Double Precision Converter ===\n");

    while (1) {
        printf("Enter a number (positive, negative, integer, or decimal, 'q' to quit): ");
        
        // Read input using %lf for double
        result = scanf("%lf", &input_val);

        if (result != 1) {
            printf("Exiting program.\n");
            break;
        }

        print_ieee754_double(input_val);
    }

    return 0;
}