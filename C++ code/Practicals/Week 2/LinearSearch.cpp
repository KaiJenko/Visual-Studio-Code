#include <stdio.h>

//This program takes an input and searches an array for this number

void linearSearch(int numArray[], int length, int searchNum){

    bool match;

    for (int x = 0; x < length; x++){

        if (searchNum == numArray[x]){
            match = true;
        }
        else {
            match = false;
        }
    }

    if (match == true){
        printf("Your number is in this array");
    }

    else {
        printf("Your number is not in the array");
    }
}

int main(){

    int size, searchNum;

    printf("please input the number you would like to search for: ");
    scanf("%d", &searchNum);

    printf("Please input the size of your array: ");
    scanf("%d", &size);

    int numbersArray[size];

    printf("Please input a array of numbers, type done once inputted: ");
    for (int x = 0; x < size; x++){
        scanf("%d\n", &numbersArray[x]);
    }

    
    int length = sizeof(numbersArray) / sizeof(numbersArray[0]);
    linearSearch(numbersArray, length, searchNum);


}