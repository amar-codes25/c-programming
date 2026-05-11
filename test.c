#include <stdio.h>
// starting point
int main()
{
    //declare variable
    float number_a;
    float number_b;

    //take input 
    printf("Enter first number: ");
    scanf("%f", &number_a);
    printf("enter second number: ");
    scanf("%f", &number_b);

    //do calculation 
    float addition = number_a + number_b;
    float subtraction = number_a - number_b;
    float multiplaction = number_a * number_b;
    float division = number_a / number_b;

    //print outputs 

    printf("\n---Results---\n");
    printf("Addition: %.2f\n", addition);
    printf("Subtraction: %.2f\n", subtraction);
    printf("multiplaction: %.2f\n", multiplaction);
    printf("division: %.2f\n", division);

    return 0; 


}