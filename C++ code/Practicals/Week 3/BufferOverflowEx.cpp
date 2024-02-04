#include <stdio.h>
#include <string.h>

//As seen in this example when the memory allocation is smaller than a input it overflows and actually runs the next command

int main(){

    char buff[15] = {0};

    // printf("Input a string");
    // scanf("%s", buff);

    // strcpy(buff, "Buffer kai");

    // printf("%s", buff);

 
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}
