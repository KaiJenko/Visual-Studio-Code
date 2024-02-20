#include <stdio.h>

//This program takes a number, and prints all fibonacci numbers up to this limit

int fibonacci(int limit){

    int total = 1, start = 1, newstart = 0;

    for (int x = 0; x < limit; x = total){
        newstart = total;
        total = total + start;
        start  = newstart;
    }
    return start; 

}

int main(){

    int limit;

    printf("Please input your limit: ");
    scanf("%d", &limit);

    int fuckyou = fibonacci(limit);
    printf("%d", fuckyou);


}
