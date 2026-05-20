#include<stdio.h>
#include<string.h>
struct student
{
    long rollno;
    char name[200];
    int fee;
};

int main()
{
    int n;
    printf("enter the number of students:\n");
    scanf("%d", &n);
    struct student s1[n];
    for(int i=0;i<n;i++)
    {
        printf("enter student name:");
        scanf("%s", s1[i].name);
        printf("enter student roll no:");
        scanf("%ld", &(s1[i].rollno));
        printf("enter fee:");
        scanf("%d", &(s1[i].fee));
    }
    
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s1[j].rollno> s1[j+1].rollno)
            {
                struct student temp;
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    printf("sorted data:\n");
    for(int i=0;i<n;i++)
    {
        printf("NAME: %s, ROLL NUMBER: %ld, FEE:%d \n", s1[i].name, s1[i].rollno, s1[i].fee);
    }
    return 0;
}
