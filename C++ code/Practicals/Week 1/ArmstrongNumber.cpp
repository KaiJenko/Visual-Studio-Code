#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//this function is to work out if a number is an armstrong number

int main(){

    int num, length = 0, total = 0;

    printf("Please input your number: ");
    scanf("%d", &num);

    char num_str[20]; //creates a character array which can hold up to 20 digits
    sprintf(num_str, "%d", num); //sprintf is used to convert the users inputted num into a string

    while (num_str[length] != '\0'){ //while it is not equal to the ascii value 0
        length++; //keep adding 1 to the length variable
    }

    printf("Length of %d is %d\n", num, length);
    
    for (int x = 0; x < length; x++){
        int digit = num_str[x] - '0';
        printf("Digits are: %d\n", digit);
        int power = pow(digit, length); //power function - used to square the digit variable by the length variable 
        total = total + power;
        printf("The digit to the power %d is: %d\n", length, power);
    }
    
    if (total == num){
        printf("Your number is an armstrong number: %d", total);
    }

    else {
        printf("Your number is not an armstrong number: %d", total);
    }

    return 0;
}