/*Self Practice on Ternary operator */

#include<stdio.h>

int main()
{
    float per;

    printf("\n Please enter the scored percentage: ");
    scanf("%f",&per);

    (per > 60.00) ? printf("\n Go for Science field\n") : printf("\n Try going for Commerce or Arts\n");
    return 0;
}