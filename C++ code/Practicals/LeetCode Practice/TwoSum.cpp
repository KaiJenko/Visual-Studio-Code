#include <stdio.h>

//Take a target number and an array of integers - print the first pair of numbers in the array which add to make the target number

void TwoSum(int nums[], int target, int size){

    for (int x = 0; x < size; x++){
        for (int y = 0; y < size; y++){
            if (x != y){
                int og = nums[x];
                int newNum = nums[y];
                if (og + newNum == target)
                {
                    printf("%d and %d\n", nums[x], nums[y]);
                    break;
                }
            }
        }
    }
    

}

int main(){

    int size, target;

    printf("please input your target number ");
    scanf("%d", &target);

    printf("Please input the size of your array ");
    scanf("%d", &size);

    int sumArray[size];

    printf("Please input your array of numbers ");
    for (int x = 0; x < size; x++){
        scanf("%d", &sumArray[x]);
    }
    
    TwoSum(sumArray, target, size);

}