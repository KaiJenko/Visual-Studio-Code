#include <stdio.h>

//This program will take a number and check if it is prime: if it is divisible by another number apart from itself or 1 it is not prime

const char* checkPrimality(int num){
    for (int x = 2; x < num; x++){
        if (num % x == 0){
            return "False";
        }
        else {
            return "True";
        }
    }
}

int main(){

    int num;

    printf("Please input the number you would like checking: ");
    scanf("%d", &num);
    const char* isPrime = checkPrimality(num); 
    printf("Your number is a prime: %s", isPrime);
}