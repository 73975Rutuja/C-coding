/*Lab practice on Unary operators with Logical operators*/
/*If AND gets first condition as zero(false), it won't check further*/
/*If OR gets first condition as one(true), it won't check further*/

#include<stdio.h>

int main()
{
    int a=1,b=0;
    int Y,Z;

    Y = a&&b++||a; // Y=1,b=1
    Z = a||a++&&b--&&--b; // Z=1

    printf("\n The values of a=%d, b=%d, Y=%d, Z=%d\n",a,b,Y,Z); // a=1,b=1

    return 0;
}