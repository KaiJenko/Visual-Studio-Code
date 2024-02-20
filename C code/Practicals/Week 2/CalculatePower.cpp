#include <stdio.h>

//This program takes two inputs, the base and the exponent, and works out the sum 

int power(int base, int exponent){
int total = base;

    for (int x = 1; x < exponent; x++){
        total = total * base;
    }

return total;

}

int main(){

    int base, exponent;

    printf("Please input the base number: ");
    scanf("%d", &base);
    printf("Please input the exponent: ");
    scanf("%d", &exponent);

    int sum = power(base, exponent);
    printf("%d to the power of %d is: %d", base, exponent, sum);

}