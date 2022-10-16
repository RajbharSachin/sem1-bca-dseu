#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2],sum=0;
    printf("Enter the elements of 2X2 2D-array\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    //Calculate Average
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        sum=sum+a[i][j];
    printf("Average of the given array is %d",sum/4);
    return 0;
}
