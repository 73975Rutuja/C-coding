/*Self practice on fucntions, along with Nested if statement*/

#include<stdio.h>

int sum(int,int);
int mul(int,int);

int main()
{
    int a,b,i,add1,mult;

    printf("\n Please enter any two number values: ");
    scanf("%d%d",&a,&b);

    printf("\n Enter choice between 1. Addition or \n 2. Multiplication\n");
    scanf("%d",&i);

    if(i==1)
    {
        add1= sum(a,b);
        printf("\n The addition of two numbers is %d\n",add1);
    }
    else if (i==2)
    {
        mult= mul(a,b);
        printf("\nThe product of two numbers is %d\n",mult);
    }
    else
        printf("\n Please enter the choice between 1 and 2 only !!\n");

    return 0;
}

int sum(int x, int y)
{
    int add = x + y;
    return add;
}

int mul(int r, int s)
{
    int prod = r * s;
    return prod;
}