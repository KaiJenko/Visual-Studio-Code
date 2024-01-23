#include <stdio.h>

int main(){

    int num1, num2;
    printf("Input the first integer: ");
    scanf("%d", &num1);
    printf("Input the second integer: ");
    scanf("%d", &num2);

    if (num2 != 0){
        float quotient = (float)num1/num2;
        printf("The division result is: %.2f\n", quotient);
    }

    else {
        printf("Cannot divide by zero.\n");
    }

    return 0;

}