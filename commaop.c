/*Self Practice on Comma Operators*/

#include<stdio.h>

int main()
{
    int a,b;

    a=(2,3);
    printf("\n The value of a=%d",a);
    
    b=(5,++a);
    printf("\n a=%d, b=%d",a,b);

    int c;
    c = 9,18,27;
    printf("\n The value of c=%d\n",c);
    return 0;
}