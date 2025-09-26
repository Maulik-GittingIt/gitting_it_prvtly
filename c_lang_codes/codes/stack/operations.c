#include<stdio.h>
# define ma_x 10
int stack[ma_x];
int top = -1;

void push(int val){
    if( top ==( ma_x-1)){
        printf("\nstack overflow");
    }
    else{
        top ++;
        stack[top] = val;
        printf("\npushed");
    }

}
void peek(int stack[]){
    if(top == -1){
        printf("\nthe stack is empty");
    }
    else{
        printf("\nthe top of the stack is:- ", stack[top]);
    }
}
void pop(){
    if(top == -1){
        printf("\nunderflow");
    }
    else{
        printf("\nremoving ", stack[top]);
        top --;
    }
}
void display(int stack[]){
    if(top == -1){
        printf("\nempty list");
    }
    else{
        
        for(int i = top;i>=0;i--){
            printf("%d\t", stack[i]);
        }
    }
}

int main(){
    int val, option;
    do{
        printf("\nenter 1 to push, 2 to pop, 3 to peek, 4 to display and 5 to exit:-\t");
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("\nenter the number u want to push:- ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                display(stack);
                break;
            default:
                printf("\ninvalid choice");
                break;

        }
    }
    while(option!=5);
}