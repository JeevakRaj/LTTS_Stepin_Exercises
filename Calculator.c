#include <stdio.h>
#include "inc/complex_calculator.h"
/**
 * @brief Main function for testing the Complex Calculator
 * 
 * @return int 
 */
int main()
{
    int choice;
    float a,b,c,d;
    complex_t num1;
    complex_t num2;
    complex_t ans={0,0};
    while(1)
    {
        printf("Complex calculator: \n");
        printf("Enter the choice: ");
        printf("1 -> addition ");
        printf("2 -> difference ");
        printf("3 -> Multiplication");
        printf("4 -> Division");
        printf("5 -> Finish");
        printf("Enter the number.\n");
        scanf("%d", &choice);

        if(choice == 1){
                printf("Enter real and imaginary part of num1 ");
                scanf("%f %f", &a,&b);
                printf("Enter real and imaginary part of num2 ");
                scanf("%f %f", &c,&d);
                complex_t num1={a,b};
                complex_t num2={c,d};
                error_t res = complex_sum(&num1,&num2,&ans); //for sum
            }
        
        if(choice == 2){
                printf("Enter real and imaginary part of num1 ");
                scanf("%f %f", &a,&b);
                printf("Enter real and imaginary part of num2 ");
                scanf("%f %f", &c,&d);
                complex_t num1={a,b};
                complex_t num2={c,d};
                error_t res = complex_difference(&num1,&num2,&ans); //for ddifference
            }

        if(choice == 3){
                printf("Enter real and imaginary part of num1 ");
                scanf("%f %f", &a,&b);
                printf("Enter real and imaginary part of num2 ");
                scanf("%f %f", &c,&d);
                complex_t num1={a,b};
                complex_t num2={c,d};
                error_t res = complex_product(&num1,&num2,&ans); //for product
            }

        if(choice == 4){
                printf("Enter real and imaginary part of num1 ");
                scanf("%f %f", &a,&b);
                printf("Enter real and imaginary part of num2 ");
                scanf("%f %f", &c,&d);
                complex_t num1={a,b};
                complex_t num2={c,d};
                error_t res = complex_division(&num1,&num2,&ans); //for division
            }
        
        if(choice == 5){
                break;
            }

    }
return 0;
        
}