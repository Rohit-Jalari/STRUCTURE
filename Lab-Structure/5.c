#include<stdio.h>
#include<string.h>
int main()
{
    struct date
    {
      int month;
      int day;
      int year;
    };
    struct student
    {
    char name[20];
    char address[30];
    char faculty[20];
    struct date date;
    };

    int total=5;

    printf("Entering the records of 5 students :\n");


    struct student student[total];
    int num=1;

    for(int i=0;i<total;i++)
    {



        printf("Enter the name of the student :");
        scanf("%s",&student[i].name);

        printf("Enter the address :");
        scanf("%s",&student[i].address);

        printf("Enter the faculty :");
        scanf("%s",&student[i].faculty);

        printf("Enter the birth-month :");
        scanf("%d",&student[i].date.month);

        printf("Enter the birth-day :");
        scanf("%d",&student[i].date.day);

        printf("Enter the birth-year :");
        scanf("%d",&student[i].date.year);

    }

    printf("ID\tName\tAddress\tFaculty\tMM\tDD\tYY\n");
    for(int i=0;i<total;i++)
    {


        printf("%d\t",num++);
        printf("%s\t%s\t%s\t",student[i].name,student[i].address,student[i].faculty);

        printf("%d\t%d\t%d",student[i].date.month,student[i].date.day,student[i].date.year);
        printf("\n");

}
}

