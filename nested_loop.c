#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 25; j++) {
            float x = j - 12;
            float y = i - 3;
            if ((x*x + y*y - 18) * (x*x + y*y - 18) * (x*x + y*y - 18) 
                - x*x * y*y*y * 50 < 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}