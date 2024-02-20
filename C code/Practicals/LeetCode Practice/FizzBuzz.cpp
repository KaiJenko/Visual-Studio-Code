#include <stdio.h>


int main(){

    int num;

    printf("Please input an integer");
    scanf("%d", &num);

    for (int x = 1; x <= num; x++){
        
        if (x % 5 == 0 && x % 3 == 0){
            printf("FizzBuzz ");
        }
        
        else if (x % 3 == 0){
            printf("Fizz ");
        }

        else if (x % 5 == 0){
            printf("Buzz ");
        }

        else{
            printf("%d ", x);
        }
    }

}