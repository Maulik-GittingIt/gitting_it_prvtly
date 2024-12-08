// we will use char array for making a string
#include <stdio.h>
void printStr(char str[]){
    int i;
    while (str[i]!='\0'){
        printf("%c", str[i]);
        i++;
    }

}
int main(){
    char str[20] = "maulik_bahl";
    printStr(str);
    return 0;
}