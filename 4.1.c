#include <string.h>
#include <stdio.h>

const int constante = 1000;

/*int main() {
    int i;

    while (scanf("%d", &i) == 1){
        if (i < 1){
            return 0;
        }
        printf("Масса %d ", i * constante);
    }

    return 0;
}*/

int main()
    {
        int i;
        scanf("%d", &i);
        while(i >= 0)
            {
                double r_gramm;
                int r_mgramm;
                r_gramm = i / constante;
                r_mgramm = i % constante;
               printf("Масса: Базовая - %d мг, Старшая -  %lf г, Младшая - %d мг\n", i, r_gramm, r_mgramm);
               scanf("%d", &i);
            }
        
    }