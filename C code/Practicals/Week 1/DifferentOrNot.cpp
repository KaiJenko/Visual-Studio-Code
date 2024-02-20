#include <stdio.h>
#include <iostream>

int main(){

    int num1, num2, num3;
    
    printf("Please input your first number: ");
    scanf("%d", &num1);
    printf("Please input your second number: ");
    scanf("%d", &num2);
    printf("Please input your third number: ");
    scanf("%d", &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3){
        printf("You have repeated numbers");
        return 0;
    }

    else {
        printf("You do not have repeated numbers");
        return 1;
    }


}