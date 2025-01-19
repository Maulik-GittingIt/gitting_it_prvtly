#include <stdio.h>
int sum_avg(int*,int*);
int sum_avg(int* a ,int* b){
    printf("the sum of the two numbers is:- %d\n",*a+*b);
    printf("the avg of the two numbers is:- %.2f\n",(float)(*a+*b)/2);
    return 1;

}
int main(){
    int a,b;
    printf("enter the numbers with a space:-");
    scanf("%d %d",&a,&b);
    int* ptr1=&a;
    int* ptr2=&b;
    sum_avg(ptr1,ptr2);
    return 0;
}