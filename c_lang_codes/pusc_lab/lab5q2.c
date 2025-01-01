#include <stdio.h>
/*Write a program to remove all the break statements from Ex-1 (with switch-case construct) and try to
 execute the program with a few inputs. Observe the difference*/
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
            printf("the area of the circle:- %f\n",3.14*r*r);
            
        case 2:
            // for rectangle
            printf("enter the length of rectangle:-");
            scanf("%d",&r);
            printf("enter the width of rectangle:- ");
            scanf("%d",&w);
            printf("the area of rectangle:- %d\n", r*w);
            
        case 3:
        // for trinagle 
            printf("enter the value of the base:-");
            scanf("%d", &r);
            printf("enter the value of the height:-");
            scanf("%d", &w);
            printf("the are of the given triangle is %f\n", 0.5*r*w);
            
        default:
            printf("error pls try again");
            
        

    }
    printf("maulik bahl");
    return 0;
}