#include <stdio.h>

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        printf("enter the %d value of the array:- ",i);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<4;i++){
        printf("the %d value of the array is:- %d\n",i,arr[i]);
    
    }
    
    return 0;
}