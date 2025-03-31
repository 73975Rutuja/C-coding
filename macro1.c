/* Basic example on macro concept, which we can use to reduce the lines of code in C */

#include<stdio.h>
#define SQUARE(X) X*X

int main()
{
    int num,sq;

    printf("\n Please enter the number whose square you wanted to find:: ");
    scanf("%d",&num);

    sq= SQUARE(num);

    printf("\n The square of the entered number is :: %d  \n",sq);
    return 0;
}