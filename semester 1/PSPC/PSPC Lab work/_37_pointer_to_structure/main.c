#include <stdio.h>
#include <stdlib.h>
struct inventory
{
    char name[20];
    int credits;
    char section;
    int rollno;
}s1,*ptr;
int main()
{
    ptr=&s1;
    printf("Enter name,credits,section,rollno\n");
    scanf("%s %d %c %d",ptr->name,&ptr->credits,&ptr->section,&ptr->rollno);
    printf("\nEntered details are\n");
    printf("%s %d %c %d",ptr->name,ptr->credits,ptr->section,ptr->rollno);
    return 0;
}
