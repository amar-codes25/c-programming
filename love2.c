#include <stdio.h>
#include <math.h>

int main()
{
    for (float y = 1.5; y > -1.5; y -= 0.1) {
        for (float x = -1.5; x < 1.5; x += 0.05) {
            float val = pow(x*x + y*y - 1, 3) - x*x*y*y*y;
            if (val <= 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}