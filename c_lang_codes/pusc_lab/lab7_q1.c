#include <stdio.h>

int main(){
    int curr_num=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d\t",curr_num);
            curr_num++;
        }
        printf("\n");
    }
    return 0;
}