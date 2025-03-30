/*Self Practice about the what printf() and scanf() returns*/

#include<stdio.h>

int main()
{
    int num= 1000;
    int count1,count2;

    printf("\n The value of num is %d\n",num);
    count1= printf("num is %d",num);//it returns count of letters & numbers printed on console, here it is 11
    printf("\n The value in first counter is %d\n",count1);

    int num2;
    printf("\n Please enter the value for num2: ");
    count2= scanf("%d",&num2); /*it returns the count of numbers scanned on console, here it is only 1, 
    as 1 number is scanned*/
    printf("\n The value in the second counter is %d",count2);

    printf("\n The address where 1000 is stored is %d\n",&num); /*here we're checking the address where 
    the num=1000 is stored. It is a random*/

    return 0;
}