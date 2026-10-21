#include <string.h>
#include <stdio.h>
#include <stdint.h>


int main() {
    int N;
    scanf("%d", &N);
    int i = 1;
    int h = 1;
    while (i <= N){
        h *= 1000;
        printf("%d %d\n", i, h);
        i++;
    }
    return 0;
}