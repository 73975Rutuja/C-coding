/* Exercise about converting Fahrenheit temperature to Degree celsius or vice versa */

#include<stdio.h>

int main()
{
    float F,C;

    printf("\n Please enter temperature in Fahrenheit: ");
    scanf("%f",&F);

    C = (5.0f/9)*(F-32);

    printf("\n The corresponding temperature of %.2f in degree celsius is: %.2f",F,C);

    printf("\n Please enter temperature in degree Celsius: ");
    scanf("%f",&C);

    F = ((9.0f/5)*C)+32;

    printf("\n The corresponding temperature of %.2f in Fahrenheit is: %.2f\n",C,F);

    return 0;
}