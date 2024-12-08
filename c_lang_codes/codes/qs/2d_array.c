#include <stdio.h>

int main(){
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("enter the %d,%d value of the array:- ",i,j);
            scanf("%d", &arr[i][j]);

        }
        
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("the value of the %d,%d element of the 2d array is:- %d\n",i,j,arr[i][j]);
            

        }
        
    }
    
    
    return 0;
}