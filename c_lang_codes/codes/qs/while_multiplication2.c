#include <stdio.h>

int main(){
    int n=1,i;
    printf("the sum of multiplication table of 8:- ");
    while(n<=10){
        i+=n*8;
        n++;
        

    }
    printf("the value of sum of table of 8 = %d", i);
    return 0;
}
// can do it using for by i++ and n as a temp variable to store the value of the sum of i*8 and so on....