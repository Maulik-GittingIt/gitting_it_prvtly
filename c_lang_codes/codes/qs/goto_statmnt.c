#include <stdio.h>

int main(){
    label:
        printf("in label black\n");
        goto end;
    printf("hello");
    goto label;
    end:
        printf("the end\n");
    return 0;
}