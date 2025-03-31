/*Self practice on using a void pointer and then type casting the same pointer*/

#include<stdio.h>

int main()
{
    int num = 80;
    void *ptr = NULL; // null pointer

    printf("\n The value of num= %d", num);
    printf("\n The address of num = %u",&num);
    printf("\n %d  ",ptr);

    ptr = &num;
    printf("\n The value of num using ptr = %d  ",*(int *)ptr); // here the type casting is done

    return 0;
}