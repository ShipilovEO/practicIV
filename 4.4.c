#include <string.h>
#include <stdio.h>
#include <stdint.h>


int main() {
    int N;
    scanf("%d", &N);
    int S = 0;
    int zn = 1;
    int i = 1;
    while (i <= N){
        S = S + (i * zn);
        zn = zn * -1;
        i++;
    }
    printf("%d", S);

    return 0;
}