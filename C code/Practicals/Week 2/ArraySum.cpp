#include <stdio.h>

//This program finds the sum of all elements in an array

int summation(int sumArray[], int size){

int total = 0;

    for (int x = 0; x <= size; x++){
        total = total + sumArray[x];
    }
return total;

}


int main(){

    int size, sumArray[size];

    printf("Please input the size of your array: ");
    scanf("%d", &size);

    printf("Please enter your array of numbers, type done once done ");
    for (int x = 0; x < size; x++){
        scanf("%d\n", &sumArray[x]);
    }

    int finalSum = summation(sumArray, size);
    printf("Your total sum of the array is: %d", finalSum);
}