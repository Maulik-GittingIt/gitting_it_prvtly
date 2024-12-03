#include <stdio.h>

int main(){
    int p,t,i;
    float r;
    printf("enter the principle amt:-");
    scanf("%d", &p);
    printf("enter the time period:- ");
    scanf("%d", &t);
    printf("enter the rate of intrest:- ");
    scanf("%f", &r);
    printf("the simpple intrest over a time period of %d is:- %f\n ", t, (p*r*t)/100);
    printf("the final amount after %d months is:- %f",t, p+(p*r*t)/100);
    return 0;
}