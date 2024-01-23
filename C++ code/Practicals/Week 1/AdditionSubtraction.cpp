#include <stdio.h>

int main(){
    int num1, num2; //declares the variables to store input integers
    printf("Enter the first integer: "); //prompts user to input 
    scanf("%d", &num1); //stores the input into num1
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;

    printf("Addition result: %d\n", sum);
    printf("Subtraction result: %d\n", difference);
    return 0;
}