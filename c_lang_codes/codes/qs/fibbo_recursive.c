#include <stdio.h>
int fibbo(int);
int fibbo(int n){
    if (n==1||n==2){
        return n-1;
    }
    else{
        return(fibbo(n-1)+fibbo(n-2));
    }
}


int main(){
    int n;
    printf("enter the number of terms :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%d\t",fibbo(i));
    }
    
    return 0;
}