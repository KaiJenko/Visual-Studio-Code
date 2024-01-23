#include <stdio.h>

//This function takes n as an input, so if n = 4, and displays the sum of 1's so 1 + 11 + 111 + 1111 = 1234 (weird one I know)

int main(){

    int n, total = 0, iteration = 0;

    printf("Please input your series value: ");
    scanf("%d", &n);

    for (int x = 0; x < n; x++){
        iteration = 1 + (iteration * 10);
        total = total + iteration;
        printf("Total so far: %d\n", total);
    }
    
    printf("Total: %d\n", total);
}