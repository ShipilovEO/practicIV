#include <string.h>
#include <stdio.h>
#include <stdint.h>


int main() {
    uint8_t r, g, b;
    scanf("%hhu %hhu %hhu", &r, &g, &b);
    float rgb3 = (r + g + b) / 3;
    printf("%f\n", rgb3);
    printf("%llu %llu %llu", (unsigned long long)sizeof(uint8_t), (unsigned long long)sizeof(float), (unsigned long long)sizeof(unsigned long long));
    return 0;
}