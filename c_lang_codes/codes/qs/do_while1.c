#include <stdio.h>

int main(){
    int n=1,sum=0;
    do{
        sum += n;
        n++;
    } while (n<=10);
    printf("the sum of the first 10 natural no=%d",sum);
    return 0;
}