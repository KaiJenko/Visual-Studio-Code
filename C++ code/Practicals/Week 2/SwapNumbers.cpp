#include <stdio.h>

//This program will take two variables and swap the numbers between each other

int swap(int num1, int num2){
    int temp1 = num1;
    int temp2 = num2;
    num1 = temp2;
    num2 = temp1;
    printf("Your variable one is now: %d \nand your variable two is: %d", num1, num2);
    return 1;
}

int main(){

    int variableOne, variableTwo;

    printf("Please input your variable one: ");
    scanf("%d", &variableOne);

    printf("Please input your variable two: ");
    scanf("%d", &variableTwo);

    swap(variableOne, variableTwo);

}