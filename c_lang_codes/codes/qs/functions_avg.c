#include <stdio.h>
float avg(float,float,float);
float avg (float a,float b,float c){
    return ((a+b+c)/3);
}
int main(){
    float a,b,c,result;
    printf("enter the 3 no seperated by a 'space':- ");
    scanf("%f %f %f",&a,&b,&c);
    result=avg(a,b,c);
    printf("the average of the given numbers is :- %f", result);
    return 0;
}