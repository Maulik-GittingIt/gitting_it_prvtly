#include <stdio.h>

int main(){
    int num;
    printf("enter the number:- ");
    scanf("%d", &num);
    printf("multiplication tabele\n");
    for (int i=10;i>0;i--){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    printf("done");
    return 0;
}