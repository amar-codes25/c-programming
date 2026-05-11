#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 25; j++) {
            float x = (j - 12) / 2.0;
            float y = i - 3;
            
            if ((x*x + y*y - 9) * (x*x + y*y - 9) * (x*x + y*y - 9) 
                - x*x * y*y*y * 15 < 0) {
                printf("❤️");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}