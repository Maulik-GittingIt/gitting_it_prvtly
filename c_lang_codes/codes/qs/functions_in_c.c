#include <stdio.h>
int sum(int, int);
int sum(int x, int y){
    printf("the sum of the given numbers is :-%d ", x+y);
    return x+y;
}

int main(){
    int a,b ;
    printf("enter the value of the first number:-");
    scanf("%d", &a);
    printf("enter the value of the second number:-");
    scanf("%d", &b);
    sum(a,b);

    return 0;
}