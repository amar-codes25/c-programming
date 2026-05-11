#include <stdio.h>

int main()
{
    //declaare the variable
    char name[50];
    char item1[50];
    char item2[50];
    char item3[50];
    float price1, price2, price3;
    int qty1, qty2, qty3;
    float total, discount, finalbill;
    
    //ask for customer name 
    printf("Enter your name: ");
    scanf(" %[^\n]s", name);

    //ask for item 1 name , price and quantity
    printf("Enter item 1: ");
    scanf( " %[^\n]s", item1);

    printf("Enter item1 price: ");
    scanf(" %f", &price1);
     printf("Enter item1 quantity: ");
     scanf(" %d", &qty1);

     printf("Enter item 2: ");
    scanf(" %[^\n]s", item2);

    printf("Enter item2 price: ");
    scanf(" %f", &price2);
     printf("Enter item2 quantity: ");
     scanf(" %d", &qty2);

     printf("Enter item 3: ");
    scanf(" %[^\n]s", item3);

    printf("Enter item3 price: ");
    scanf(" %f", &price3);
     printf("Enter item3 quantity: ");
     scanf(" %d", &qty3);

     //calculate total
     float item1_total, item2_total, item3_total;

     item1_total = price1 * qty1;
     item2_total = price2 * qty2;
     item3_total = price3 * qty3;

     total = item1_total + item2_total + item3_total;

     //check if discount applies

     if(total > 1000)
     {
        //calculate discount
        discount = total * 0.10;

        //calculate finalbill
        finalbill = total - discount;
     }
     else{
        // no discount 
        finalbill = total;
     }

     printf("\n ---- BILL ----\n");
     printf("Item 1 : %s x %d = %.2f\n", item1, qty1, item1_total);
printf("Item 2 : %s x %d = %.2f\n", item2, qty2, item2_total);
printf("Item 3 : %s x %d = %.2f\n", item3, qty3, item3_total);
printf(" Total : %.2f\n", total);

if(total > 1000)
printf("discount: %.2f\n", discount);
else
printf("no discount\n");

printf("final Bill: %.2f\n", finalbill);

return 0;

}