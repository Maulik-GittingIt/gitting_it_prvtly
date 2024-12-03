#include <stdio.h>

int main(){
    int n, p, prim=1;
    printf("enter the number:- ");
    scanf("%d", &n);
    if (n==0){
        printf("invalid input:- ");

    }
    else if(n==1){
        printf("it is a unique number:- ");

    }
    else{
        for(int i=2;i<=n/2;i++){
            p= n%i;
            if (p==0){
                prim=0;
                break ;
            }

            

        }
        if(prim==0){
            printf("the given number %d is not a prime number", n);

        }
        else{
            printf("the given number %d is a prime number", n);
        }
    }   

    return 0;
}