/*Program without main function, using macros. This basic code is just to answer a MCQ question in C, asking if we can run the C program without using main(), I tried to provide it's solution using macros*/

#include<stdio.h>

# define Me main

int Me()
{
    printf ("Hello world");
}
