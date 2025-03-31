/* A simple example, which I found in a book, I run it because I wanted to understand the concept of memory for strings in the below case*/

#include<stdio.h>
#include<string.h>

int main()
{
    char *str1 = "sunbeam";
    char *str2 = "sunbeam";
    // new memory for str2 is not created. 
    //str2 points  at the same address as str1 as both strings are same.

    if(str1 == str2)  // compares addresses
        printf("Strings are equal !");
    else
        printf("Strings are Not equal !");

    return 0;
}