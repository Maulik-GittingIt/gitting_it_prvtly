#include <stdio.h>
/*Write a program to program to calculate an area of a circle, a rectangle, or a triangle
depending on the user’s choice*/
int main(){
    int choice, r, w;
    printf("enter 1 for circle\nenter 2 for rectangle\nenter 3 for triangle");
    printf("enter your choice:- ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            // for circle:
            printf("enter the value of radius:- ");
            scanf("%d",&r);
            printf("the area of the circle:- %f",3.14*r*r);
            break;
        case 2:
            // for rectangle
            printf("enter the length of rectangle:-");
            scanf("%d",&r);
            printf("enter the width of rectangle:- ");
            scanf("%d",&w);
            printf("the area of rectangle:- %d", r*w);
            break;
        case 3:
        // for trinagle 
            printf("enter the value of the base:-");
            scanf("%d", &r);
            printf("enter the value of the height:-");
            scanf("%d", &w);
            printf("the are of the given triangle is %f", 0.5*r*w);
            break;
        default:
            printf("error pls try again");
            break;
        

    }

    return 0;
}