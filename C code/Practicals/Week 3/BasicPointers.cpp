#include <stdio.h>

//This program is to help me understand the basics of using C pointers and memory allocation addresses

void replace(int *i, int *j, int *k){

    *i = 20; *j = 21; *k = 22;
    printf("Values inside call: %d %d %d\n", *i, *j, *k);

}

int main(){

    int a,b,c;
    printf("Please enter three values: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("Values before call: %d %d %d\n", a,b,c);
    replace(&a,&b,&c);
    printf("Values after call: %d %d %d",a,b,c);

}
