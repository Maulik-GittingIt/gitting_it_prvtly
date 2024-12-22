#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); // intializing the random generator
    // generating a random number in c 
    int random_num = (rand() % 100)+1;
    // printf("the random number is :- %d", random_num);
    /* logic:- we will input no from user and then if the no is not the no we generated above then 
    we will give driection using if else statements depending upon if they are guessing a number
    gr8r or lesser than the actual no!!! 
    we will use :- 
    do{}while{} under which will be a variable that stores the no of gusses they took
    if else to compare and etc:-*/
    int guess, no_of_guess=0;
    

    do{
        printf("enter your guess:-  ");
        scanf("%d", &guess);
        if(guess>random_num){
            printf("the number u guessed is GREATER than the actual number!!!! \n");
        } 
        else if(guess<random_num){
            printf("the number u guessed is SMALLER than the actual number!!!!\n");
        }
        else{
            printf("u r neither higher nor lower then WHERE ARE U? \n");
        }

        no_of_guess ++ ;
        
    }while(guess!=random_num);

    printf("ur no of guesses is :- %d\n",no_of_guess);
    printf("press enter to close the game:- ");
    getchar(); 
    

    return 0;
}