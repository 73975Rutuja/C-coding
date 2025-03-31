/*Self Practice on Call or Pass by value and Call or Pass by address functions*/

#include<stdio.h>

void swap(int,int); // call by value function
void swap1(int *,int *); // call by address function

int main()
{
    int a,b;
    printf("\n Please enter the values for a and b :: ");
    scanf("%d%d",&a,&b);
    swap(a,b);

    printf("\n The swapped values of a= %d, b= %d, using swap function ",a,b);
    
    swap1(&a,&b);
    printf("\n The swapped values of a= %d, b= %d, using the swap1 function\n",a,b);

    return 0;
}

void swap(int num1,int num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

}

void swap1(int *ptr1, int *ptr2)
{
    int temp1;

    temp1 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp1;

}