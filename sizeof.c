/*Self Practice program regarding the sizeof operator*/

#include<stdio.h>

int main()
{
    int a;
    unsigned int b;
    char R;
    float fnum;
    double dnum;

    printf("\n The size of the integer number is %d",sizeof(a));
    printf("\n The size of the unsigned integer number is %d",sizeof(b));
    printf("\n The size of the character is %d",sizeof(R));
    printf("\n The size of the float number is %d",sizeof(fnum));
    printf("\n The size of the double number is %d",sizeof(dnum));
    printf("\n The size of the a number as 17.03 %d",sizeof(17.03));
    printf("\n The size of double+float is %d",sizeof(dnum+fnum));
    printf("\n The size of the character-integer number is %d",sizeof(R-a));
    printf("\n The size of the float-double number is %d",sizeof(fnum-dnum));
    printf("\n The size of the product of integer and double is %d",sizeof(a*dnum));
    printf("\n %d\n",sizeof('D'));

    return 0;
}