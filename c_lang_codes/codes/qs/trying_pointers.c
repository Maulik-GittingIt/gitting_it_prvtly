#include <stdio.h>

int main(){
    int i = 72, k=65656;
    int* j=&k;
    printf("the address of i = %p\n", &i);
    printf("the address of k = %p\n", j);
    // the value stored at an address can be pointed by the * variable in the form of *(&variable name)
    // or we can simply use * function with a pointer as &variable does the same job 

    printf("the value stored at k= %d and at i=%d", *j, *(&i));
    return 0;
}