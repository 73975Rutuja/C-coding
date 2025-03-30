/*Self Practice on Nested Ternary Operator */

#include<stdio.h>

int main()
{
    int a, b, c, max;

    printf("\n Please enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c); 

    max = a>b ? (a>c ? a : c) : (b>c ? b : c);

    printf("\n The maximum value from the three given numbers is:- %d\n",max);

    return 0;
}