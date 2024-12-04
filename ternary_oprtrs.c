#include <stdio.h>

int main(){
    // ternary operators are ? and : and can replace if, else
    // syntax:- <condn> ? <exprsn if true> : <exprsn if false>;
    int a = 123;
    int b = 1234;
    a>b? printf("a is greater than b") : printf("b is greater than a");
    return 0;
}