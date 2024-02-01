#include <stdio.h>
#include <string.h>

//This program takes a string, and reverses it to see if it matches and is a palindrome

char const * palindromeCheck(char palindrome[]){
    int length;
    length = strlen(palindrome);
    char reverseString[length];
    

    for (int x = length -1,  y = 0; x >= 0; x--, y++){
        reverseString[y] = palindrome[x];  
    }
    
    if (reverseString == palindrome){
        return "It is a palindrome";
    }

    else {
        return "It is not a palindrome";
    }

}

int main(){

    char palindrome[100];
    

    printf("Please input your word to be checked: ");
    scanf("%s", &palindrome);

    palindromeCheck(palindrome);

}