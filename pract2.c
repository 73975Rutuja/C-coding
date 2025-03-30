/*Self practice to see the output for the numbers out of range of int, char and all*/

#include<stdio.h>

int main()
{

    int x=0,y=0;
    int sum;

    char A1, A2;
    char sum2;

    printf("\n Please enter any two numbers: "); //give x=2147483647
    scanf("%d%d",&x,&y);

    sum=x+y;
    printf("\n The value of sum is:- %d\n",sum);

    printf("\n Please enter the two character values:- ");
    scanf("%*c%c%*c%c",&A1,&A2);

    sum2= A1 + A2;
    printf("Addition of A1 and A2 characters is %d\n",sum2);

    return 0;
}

/*
formula for calculating out of range values :
 n - 2^8
 500 - 256 = 244
 244 - 256 = -12
*/