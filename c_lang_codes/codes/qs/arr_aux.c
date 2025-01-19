#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int aux[5];
    for (int i =0;i<5;i++){
        aux[4-i]=arr[i];
    }
    for(int i=0;i<5;i++){
        printf("%d\t",aux[i]);
    }
    return 0;
}