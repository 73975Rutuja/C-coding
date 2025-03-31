/*A random problem found in a book, tried to check it's output, to clear the pointer concept*/

#include<stdio.h>

int main()
{
    
    int num = 130;
    char *cptr = &num; // this is a character pointer and it's size is 1 byte

    float num1 = 120.00;
    int *fptr = &num1;

    char ch = 'A';
    int *c_ptr = &ch;

    printf("\n The value of num= %d",num);
    printf("\n The value of num using cptr= %d ",*cptr); // we'll get here -126, because it is a signed character pointer and it's range is -128 to 127

    printf("\n The value of num using cptr= %d ",*(int *)cptr);

    printf("\n The value of num1= %f",num1);
    printf("\n The value of num1 using fptr= %f ",*(float *)fptr);

    printf("\n The value of ch= %c",ch);
    printf("\n The value of ch using cptr= %c ",*(char *)c_ptr);

    return 0;
}