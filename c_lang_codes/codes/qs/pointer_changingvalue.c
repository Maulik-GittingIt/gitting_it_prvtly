#include <stdio.h>

int main(){
    int a;
    printf("enter the value of a:- ");
    scanf("%d", &a);
    int* ptr = &a;
    *ptr = *ptr * 10;
    printf("%d",*ptr );
    return 0;
}