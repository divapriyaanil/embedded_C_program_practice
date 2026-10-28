#include <stdio.h>   // Includes standard input/output library for the printf() function
#include <stdint.h>  // Includes fixed-width integer types like uint8_t, uint16_t, uint32_t

int main(void) {     // Program execution starts here; 'void' means main takes no arguments
    
    // Declare an 8-bit unsigned integer (0 to 255) to simulate an 8-bit hardware register.
    // Initialize it to hexadecimal 0x00, which is 0000 0000 in binary (all 8 bits are 0).
    uint8_t reg = 0x00;

    // Set bit 3 to 1 without changing any other bits:
    // 1. (1U << 3) shifts unsigned 1 left by 3 positions -> creates mask 0000 1000.
    // 2. '|=' performs a Bitwise OR between 'reg' (0000 0000) and the mask (0000 1000).
    // 3. Result stored in 'reg' is 0000 1000 in binary, which equals 8 in decimal.
    reg |= (1U << 3);

    // Print the decimal value of 'reg'. '%u' is the format specifier for an unsigned integer.
    printf("Register value: %u\n", reg);

    // Return 0 to the operating system to indicate the program finished successfully.
    return 0;
}
