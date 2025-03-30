/*Random Assignment:- Write a program to accept two numbers from the user and find it's sum, difference and
product*/

#include<stdio.h>

int main()
{
    int a,b;
    int sum,diff,prod;

    printf("\n Please enter the value for a: ");
    scanf("%d",&a);
    printf("\n Please enter the value for b: ");
    scanf("%d",&b);

    sum=a+b;
    diff=a-b;
    prod=a*b;

    printf("\n The addition of the entered two numbers is: %d\n",sum);
    printf("\n The subtraction of the entered two numbers is: %d\n",diff);
    printf("\n The product of the entered two numbers is: %d\n",prod);

    return 0;

}