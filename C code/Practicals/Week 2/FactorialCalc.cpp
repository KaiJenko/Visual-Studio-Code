#include <stdio.h>

//This program will take an integer, and work out the factorial of the numer 3! = 3*2*1

int factorial(int number){

int total = 1;

    for (int x = number; x > 0; x--){
        total = total * x;
    }

return total; 

}

int main(){

    int number;
    printf("Please input your number: ");
    scanf("%d", &number);
    int sum = factorial(number);
    printf("your factorial sum is: %d", sum);
    

}