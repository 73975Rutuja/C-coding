/*Self Practice on short hand operators*/

#include<stdio.h>

int main()
{
    int n1,n2;

    printf("\n Please enter any two numbers:- ");
    scanf("%d%d",&n1,&n2);

    printf("\n Entered values of n1=%d and n2=%d",n1,n2);

    n1+=n2;
    printf("\n value of n1=%d and n2=%d",n1,n2);

    n1-=n2;
    printf("\n value of n1=%d and n2=%d",n1,n2);

    n1*=n2;
    printf("\n value of n1=%d and n2=%d",n1,n2);

    n1/=n2;
    printf("\n value of n1=%d and n2=%d",n1,n2);

    n1%=n2;
    printf("\n value of n1=%d and n2=%d\n",n1,n2);

    return 0;

}