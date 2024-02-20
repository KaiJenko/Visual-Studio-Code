#include <stdio.h>

//This is to show the different ways of error handling within C programming

int main(){

    int num;

    printf("input a number");
    scanf("%d", num);

    printf("Your number is: %d", num);
    perror("Message");

}