#include <stdio.h>
// wap to make an subarray from an given array in between 2 indexes
int main(){
    int arr[5]={1,2,3,4,5};
    int n1,n2;
    printf("enter the first index and the second index to create a subaaray from:- ");
    scanf("%d %d",&n1,&n2);
    int sub_arr[n2-n1+1];
    for (int i=0;i<=n2-n1;i++){
        sub_arr[i]=arr[i+n1];
    }
    for (int i=0;i<=(n2-n1);i++){
        printf("%d\t",sub_arr[i]);

    }
    return 0;
}