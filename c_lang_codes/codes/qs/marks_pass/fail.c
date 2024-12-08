#include <stdio.h>

int main(){
    int mark1, mark2, mark3;
    printf("enter the marks of 1st subject:- ");
    scanf("%d", &mark1);
    printf("enter the marks of 2nd subject:- ");
    scanf("%d", &mark2);
    printf("enter the marks of 3rd subject:- ");
    scanf("%d", &mark3);

    if (mark1<33 || mark2<33 || mark3<33){
        printf("u are failed individual score");

    }
    else if ((mark1+mark2+mark3)/3 < 40){
        printf("u have failed as overall score is less than 40 ");
    }
    else{
        printf("u have passed :- ");
    }
    return 0;
}