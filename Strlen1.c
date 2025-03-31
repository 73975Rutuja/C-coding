/*Lab Practice on displaying the string length of a string */

#include<stdio.h>

int str_len(char arr[20]);

int main()
{
    char arr[20] = "Sunbeam";

    int C = str_len(arr);

    printf("\n The string is :: %s ", arr);
    printf("\n The string length of arr is %d  ",C);

    return 0;
}

int str_len(char arr[20])
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