#include <stdio.h>
// wap to print multiplication table of a given number:- 
int main(){
    int num;
    printf("enter the number:- ");
    scanf("%d", &num);

    // for use krenge so that we can cr8 a loop;
    printf("the multiplication table of:- %d\n", num);
    for(int i=1; i <= 10; i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }

    return 0;
}