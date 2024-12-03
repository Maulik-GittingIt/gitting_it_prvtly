#include <stdio.h>

int main(){
    int var1=11;
    int var2=22;
    int*ptr; // * here means value at the address or value pointed at. and & means address of.
    ptr = &var1;
    printf("%d", ptr);

    ptr= &var2;
    printf("%d", ptr);

    return 0;
}