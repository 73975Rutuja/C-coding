/*Lab Practice on displaying the string length of a string */

#include<stdio.h>

int str_len(char arr[50]);

int main()
{
    char arr[50];

    printf("\n Please enter a word:: ");
    scanf("%[^\n]s",arr); // [^\n]: it means scan till enter is pressed

    int C = str_len(arr);

    printf("\n The string length of arr is %d  ",C);

    return 0;
}

int str_len(char arr[50])
{
    int i=0;
    int count = 0;

    while(arr[i]!='\0')
    {
        count = count + 1;
        i++;
    }
    return count;
}