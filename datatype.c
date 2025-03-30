/*Self practice different datatypes. String datatype is not available here */

#include<stdio.h>

int main()
{
    int rollno;
    float eng=0.00,math=0.00,sci=0.00,total=0.00;
    double per=0.0;
    char name;

    printf("Please enter the initial letter of name of the student: \n");
    scanf("%c",&name);
    printf("Please enter the roll number of the student: \n");
    scanf("%d",&rollno);

    printf("Please enter the marks for English subject: \n");
    scanf("%f",&eng);
    printf("Please enter the marks for Maths subject: \n");
    scanf("%f",&math);
    printf("Please enter the marks for Science subject: \n");
    scanf("%f",&sci);

    total=eng+math+sci;
    per=(total/300)*100;

    printf("\nStudent named %c and rollnumber %d has a total of %.2f \n", name,rollno,total);
    printf("\n The percentage of the student is %.2lf%% \n",per); /*the %% is used so that it can show
    the percentage sign on the console*/
    
    return 0;
}