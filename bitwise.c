/*Lab practice on Bitwise operators*/

#include<stdio.h>

int main()
{
    int a=2,b=3;
    int w,x,y,z;

    w = a^b; // 0010^0011 = 0001 
    x = a&b;// 0010 & 0011 = 0010
    y = a|b; // 0010|0011= 0011
    z = ~a; // formula= -(x+1), z= -(a+1)= -(2+1)= -3
    a = !a; //0

    printf("\n The values of a=%d, b=%d, w=%d, x=%d, y=%d",a,b,w,x,y); // 0,3,1,2,3
    printf("\n The value of z=%d\n",z);
    return 0;

}