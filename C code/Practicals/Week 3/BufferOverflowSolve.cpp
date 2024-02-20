#include <stdio.h>

//This program ensures a buffer overflow cannot occur

#include <stdio.h>
#include <string.h>

//By using fgets instead of gets with a max value of it stops any input which goes over the array range

int main(){

    char buff[15] = {0};

    int pass = 0;

    printf("\n Enter the password : \n");
    fgets(buff, 15, stdin);

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