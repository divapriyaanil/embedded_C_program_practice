#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t reg = 0x00;       // 0000 0000
    reg |= (1U << 3);         // Set bit 3 -> 0000 1000 (8)
    printf("Register value: %u\n", reg);
    return 0;
}
