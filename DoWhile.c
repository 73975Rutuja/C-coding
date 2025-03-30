/*Self Practice on do while loop*/

#include<stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("\n Please enter any two numbers: ");
    scanf("%f%f",&num1,&num2);

    do
    {
        printf("0. Exit\n");
        printf("1. Addition\n 2. Difference\n 3. Product\n 4.Division");
        
        printf("\n\n Please enter the choice between 1 to 4 :: ");
        scanf("%d",&choice);
        
        switch(choice)
        {

            case 1: // Addition
                result= num1 + num2;
                printf("\n The addition of two numbers is : %f\n",result);
                break;
            
            case 2: // Difference
                result= num1 - num2;
                printf("\n The difference of two numbers is : %f\n",result);
                break;

            case 3: // Multiplication
                result= num1 * num2;
                printf("\n The product of two numbers is : %f\n",result);
                break;

            case 4: // Division
                result= num1 / num2;
                printf("\n The division of two numbers is : %f\n",result);
                break;

            default : 
                printf("\n Please enter a valid choice between 1 to 4\n");
                break;
        }
    } while (choice!=0);
    
    return 0;
}