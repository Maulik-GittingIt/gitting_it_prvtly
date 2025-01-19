#include <stdio.h>

int main(){
    int arr[3][3]={{1,2,3},
                  {3,2,1}};
    int n,count=0;
    printf("enter the no u need to find from the given 2d array :");
    scanf("%d",&n);


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==n){
                printf("found at %d %d index\n", i,j);
                count+=1;
            }

        }
    }
    printf("the number of occurance-%d",count);
    return 0;
}