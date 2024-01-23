#include <stdio.h>

int main(){

    //this function is to find if a set of three numbers are a pythagorean triple = (a*a+b*b = c*c)
    int num1, num2, num3;

    printf("please input your first number: ");
    scanf("%d", &num1);
    printf("please input your second number: ");
    scanf("%d", &num2);
    printf("please input your third number: ");
    scanf("%d", &num3);

    if ((num1*num1) + (num2*num2) == (num3*num3)) {
        printf("the three numbers perform a pythagorean triple where a is %d, b is %d and c is %d", num1, num2, num3);
    }

    else if ((num1*num1) + (num3*num3) == (num2*num2)) {
        printf("the three numbers perform a pythagorean triple where a is %d, b is %d and c is %d", num1, num3, num2);
    } 

    else if ((num3*num3) + (num2*num2) == (num1*num1)) {
        printf("the three numbers perform a pythagorean triple where a is %d, b is %d and c is %d", num3, num2, num1);
    }

    else {
        printf("The numbers do not form a pythagorean triple");
    }

}