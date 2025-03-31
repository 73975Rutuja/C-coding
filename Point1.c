/*Self practice on Pointer basics*/

#include<stdio.h>

int main()
{
    int num = 15;
    int *ptr = &num;

    printf("\n The value of num = %d", num);
    printf("\n The value of num using ptr = %d ",*ptr);
    printf("\n The address where num is stored =%u  ",ptr); /* here address is gonna print and it's always
                in the form of unsigned int value and has 4 bytes of memory*/
                                                
    return 0;
}