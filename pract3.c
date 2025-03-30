/*Self practice to demonstrate width specifiers and displaying the ASCII value of characters*/

#include<stdio.h>

int main()
{

    char ch='*';
    char ch1='A',ch2='5';

    printf("\n The ASCII value of \'*\' is %d",ch);
    printf("\n The ASCII value of A is %d",ch1);
    printf("\n The ASCII value of 5 is %d\n",ch2);

    printf("%6c",ch);
    printf("\n%3c%3c%3c",ch,ch,ch);
    printf("\n%c%2c%3c%3c%2c",ch,ch,ch,ch,ch);
    printf("\n%3c%3c%3c",ch,ch,ch);
    printf("\n%6c\n",ch);

    int i=30;
    
    printf("\n%d",i);
    printf("\n%5d",i); //first leave the spaces and then write
    printf("\n%-5d\n",i); // write and then leave the spaces

    return 0;

}