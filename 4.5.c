#include <string.h>
#include <stdio.h>
#include <stdint.h>

double l_to_gal();

int main() {
    double value, gal;
    while (scanf("%lf", &value) == 1){
    gal = l_to_gal(value);
    printf("%.2f", gal);
    }
    return 0;
}

double l_to_gal(double value) {
    return value / 3.785;

}