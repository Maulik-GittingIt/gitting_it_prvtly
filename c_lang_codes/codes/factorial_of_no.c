#include <stdio.h>

int main(){
    int n, i;
    int fact = 1;

    printf("enter the no. :- ");
    scanf("%d", &n);
    for (int i=1 ; i<=n; i++){
        fact*= i;
        
    }
    printf("the factorial of the given no. is :- %d",fact );
    return 0;
}