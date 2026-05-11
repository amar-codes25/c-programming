#include <stdio.h>
int main()
{
    // define variable 
    char name[50];
    int rollno;
    float math, science, english, hindi, computer;
    float total, percentage;
    char grade;


    printf("Enter student name: ");
    scanf("%[^\n]s", name);
    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("enter marks for maths: ");
    scanf("%f", &math);

    printf("enter marks for science: ");
    scanf("%f", &science);

    printf("enter marks for english: ");
    scanf("%f", &english);
    
    printf("enter marks for hindi: ");
    scanf("%f", &hindi);

    printf("enter marks for computer: ");
    scanf("%f", &computer);

     total = math + science + english + hindi + computer;    percentage = (total/500) * 100;

     if(percentage >= 90)
    grade = 'A' ;
    else if(percentage >= 75)
    grade = 'b' ;
    else if(percentage >= 60)
    grade = 'c' ;
    else if(percentage >=40)
    grade = 'd' ;
    else
    grade = 'f' ;

    
    printf("\n--- Student Report Card ---\n");
    printf("Name: %s\n", name);
    printf("Roll no: %d\n", rollno);
    printf("Math: %.2f\n", math);
    printf("science: %.2f\n", science);
    printf("english: %.2f\n", english);
    printf("hindi: %.2f\n", hindi);
    printf("computer: %.2f\n", computer);

    printf("total: %.2f / 500\n", total);
    printf("percentage: %.2f%%\n", percentage);
    printf("grade: %c\n", grade);
    return 0;
}