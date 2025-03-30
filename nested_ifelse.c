/*Self practice on Nested if statements*/

#include<stdio.h>

int main()
{
    int a,b,c,max;

    printf("\n Please enter the values of a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b)
    {
        if( a> c)
        {
            max = a;
        }
        else
            max = c; 
    }
    else
    {
        if(b > c)
        {
            max = b;
        }
        else
            max = c;
    }
    printf("\n The maximum from the three values entered is: %d\n", max);

    return 0;
}