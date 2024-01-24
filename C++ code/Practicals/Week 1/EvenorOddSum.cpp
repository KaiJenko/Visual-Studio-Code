#include <stdio.h>

//This function takes an array of numbers, and calcualtes the sum of all even and odd nums seperately 

int main(){

    int sizeofArray, evenNumsTotal = 0, oddNumsTotal = 0;

    printf("Please input the size of your array: ");
    scanf("%d", &sizeofArray);
    
    int nums[sizeofArray] ;

    printf("Please input a array of numbers, type done once inputted: ");
    for (int x = 0; x < sizeofArray; x++){
        scanf("%d\n", &nums[x]);
    }

    int length = sizeof(nums) / sizeof(nums[0]);

    for (int x = 0; x < length; x++){
        printf("%d ", nums[x]);
    }

    for (int x = 0; x < length; x++){
        int newNum = nums[x];
        if (newNum % 2 == 0){
            evenNumsTotal = evenNumsTotal + newNum;
        }

        else if (newNum % 2 != 0){
            oddNumsTotal = oddNumsTotal + newNum;
        }

        else {
            printf("Error not a number");
        }
    }

    printf("Even nums: %d and Odd nums: %d", evenNumsTotal, oddNumsTotal);

}