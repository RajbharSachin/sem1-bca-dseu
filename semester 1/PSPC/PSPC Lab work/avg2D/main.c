#include<stdio.h>
int main()
{
    int numbers[100][100];
    int rows,columns;
    float average;
    int sum =0;
    int (*ptr)[100][100];
    ptr = &numbers;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    printf("Enter the number of columns:\n");
    scanf("%d",&columns);
    printf("Enter the Input elements:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&(*ptr)[i][j]);
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            sum = sum + ((*ptr)[i][j]);
        }
    }
    average = sum/(float)(rows*columns);
    printf("The average is:%f",average);
    return 0;
}
