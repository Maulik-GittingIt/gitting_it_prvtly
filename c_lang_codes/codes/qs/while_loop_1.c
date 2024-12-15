#include <stdio.h>

int main(){
    int n=1,sum=0;
    printf("the sum of the first 10 natural no:- ");
    while (n<=11){
        sum+=n;
        n ++;
    }
    printf("%d", sum);
    return 0;
}