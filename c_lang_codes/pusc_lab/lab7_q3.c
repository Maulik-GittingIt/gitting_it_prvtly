#include <stdio.h>

int main(){
   
    for(int i=5;i>=1;i--){
        for(int k=0;k<i;k++){
            printf("%d\t", i);

        }
        printf("\n");
        
    }
    return 0;
}