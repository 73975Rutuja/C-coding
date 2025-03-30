/*Lab practice for unary operators with comma and bracket operator*/

#include<stdio.h>

int main()
{
    int a, b;
    int r,s;

    printf("\n Please enter any two numbers: ");
    scanf("%d%d",&a,&b);// if you give values as 10,11, then we'll get the corresponding output

    r = a++,b++,++a;// r=10
    s= ++b,--b,b--; // s=13

    printf("\n The final values after (r = a++,b++,++a) and (s= ++b,--b,b--): a=%d, b=%d,r=%d and s=%d",a,b,r,s); // 12,11,10,13

    r = (a,b,b--,++a,a++);//13
    s = (b,a--,a,--b,b--,b++);//8

    printf("\n The final values after (r = (a,b,b--,++a,a++)) and (s = (b,a--,a,--b,b--,b++)) a=%d, b=%d,r=%d and s=%d\n",a,b,r,s); // 13,9,13,8


    return 0;
}