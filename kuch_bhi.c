#include <stdio.h>
#include <math.h>

int main() {
    int p, r, t;
    double ci;

    printf("Enter the principal: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the time in years: ");
    scanf("%d", &t);

    ci = p * pow(1 + r / 100.0, t) - p;
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}