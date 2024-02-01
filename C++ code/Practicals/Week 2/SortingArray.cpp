#include <stdio.h>

//This program takes an array and sorts it in ascending order

int sort(int sortArray[], int length){

    for (int x = 0; x < length; x++)

}

int main(){

    int size;

    printf("Please input the size of your array: ");
    scanf("%d", &size);
    
    int numbers[size] ;

    printf("Please input a array of numbers, type done once inputted: ");
    for (int x = 0; x < size; x++){
        scanf("%d\n", &numbers[x]);
    }

    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int x = 0; x < length; x++){
        printf("%d ", numbers[x]);
    }

    

}