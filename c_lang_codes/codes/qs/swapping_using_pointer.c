#include <stdio.h>
int swap(int*,int*);
int swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
   
}

int main(){
    int a,b;
    printf("enter the value of a b:- ");
    scanf("%d %d", &a, &b);
    int* j=&a;
    int* k=&b;
    swap(j,k);
    printf("the value at a=%d,value at b=%d", *j,*k);
    return 0;
}