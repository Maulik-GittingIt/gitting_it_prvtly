#include <stdio.h>

int main(){
    /*Write a program to design a calculator that performs addition, subtraction, minus, and division
operation. This program inputs two operands and an operator and then displays the calculated results*/
    char opr;
    int num1, num2;
    printf("enter the number 1:- ");
    scanf("%d", &num1);
    printf("enter the operator ");
    scanf(" %c", &opr);
    printf("enter the number 2:- ");
    scanf("%d", &num2);
    switch(opr){
        case '+':
            printf("the sum of the given numbers is = %d", num1+num2);
            break;
        case '-':
            printf("the diffrence of the given number = %d",num1-num2);
            break;
        case 'x':
            printf("the product of the given numbers are = %d",num1*num2);
            break;
        case '/':
            printf("the quotient is = %f", (float)num1/num2);
            break;
        default :
            printf("error");
            break;

    }
    printf("\nmaulik bahl");
    return 0;
}