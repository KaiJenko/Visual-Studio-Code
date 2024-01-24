#include <stdio.h>

//function to work out whether a number is triangular or not - 1,3,6,10,15 so on

int isTriangular(int number){
    int triangularNums[number*2] = {};
    for (int x = 1; x <= number; x++){
        int formulaOutput = ((x * (x + 1)) / 2);
        triangularNums[x-1] = formulaOutput;
        printf("x: %d, Formula: %d, Array value: %d\n", x, formulaOutput, triangularNums[x-1]);
        if (number == formulaOutput){
            printf("Your number is a triangular number");
            break;
        }

        else if (formulaOutput > number){
            printf("Your number is not a triangular number");
            break;
        }
    } 
}

int main(){

    int num;

    printf("Please input a number: ");
    scanf("%d", &num);

    isTriangular(num);

}

