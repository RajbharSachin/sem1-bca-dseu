#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rollno;
    float marks1,marks2,marks3,average,percentage;
    char name[50];
    printf("Enter the name\n");
    scanf("%s",name);
    printf("Enter the rollno\n");
    scanf("%d",&rollno);
    printf("Enter the marks in three subjects\n");
    scanf("%f %f %f",&marks1,&marks2,&marks3);
    // Calculate average
    average= (marks1+marks2+marks3)/3;
    // Calculate percentage
    percentage= (marks1+marks2+marks3)/300*100;
    printf("Average = %f\n",average);
    printf("Percentage = %f",percentage);
    return 0;
}
