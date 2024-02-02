#include <stdio.h>

//This program takes an array and sorts it in ascending order

void swap(int array[], int x, int y){
    int temp = array[x];
    array[x] = array[y];
    array[y] = temp;

}

void sort(int sortArray[], int length){

bool swapped;

    for (int x = 0; x < length -1; x++){
        for (int y = 0; y < length - x - 1; y++){
            if (sortArray[y] > sortArray[y + 1]){
                swap(sortArray, y, y+1);
                swapped = true;
            }
        }
    }
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

    sort(numbers, length);

    for (int x = 0; x < length; x++){
        printf("%d ", numbers[x]);
    }
}