#include <stdio.h>

int calculateSum(int num1, int num2){
    
    int sum = num1 + num2;
    printf("Your sum is: %d", sum);
    return sum;
}


int main(){
    int num1, num2;
    printf("Please enter your first number");
    scanf("%d", &num1);
    printf("Please enter your second number");
    scanf("%d", &num2);
    calculateSum(num1, num2);

}