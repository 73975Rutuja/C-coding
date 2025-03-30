/*Self practice on the factorial program*/

#include<stdio.h>

int fact(int);

int main()
{
    int num, facto;

    printf("\n Enter value of a number, whose factorial you wanted to know : ");
    scanf("%d",&num);

    facto = fact(num);

    printf("\n The factorial of the given number is :: %d  ",facto);

    return 0;
}

int fact(int n1)
{
    int res;

    if(n1==0)
        return 1;
    else
        res = n1 * fact(n1-1);
    return res;

}