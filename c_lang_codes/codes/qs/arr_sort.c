#include <stdio.h>
// to check if the given array is sorted or not 
int main(){
    int temp=1;
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<4;i++){
        if (arr[i]>arr[i+1]){
            temp= 0;
            break;
        }
        
    }
    if (temp==1){
        printf("sorted list ");

    }
    else{
        printf("unsorted array");
    }
    return 0;
}