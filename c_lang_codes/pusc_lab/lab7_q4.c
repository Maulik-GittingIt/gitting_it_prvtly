#include <stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        int k = i;
        if(i==4){
            k=6;
        }
        else if (i==5){
            k=9;
        }
        for(int j=0;j<i;j+=1){
            printf("%d\t", k);
            k += 2;
        }
        printf("\n");
    }
    return 0;
}

