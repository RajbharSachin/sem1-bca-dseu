#include<stdio.h>
int main()
{
    int space,i,urows,j,k;
    printf("Enter the number of upper rows ");
    scanf("%d",&urows);
    //for upper half
    for(i=1;i<=urows;i++)
    {
        for(space=(urows-i);space>0;space--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=(i-1);k>0;k--)
            printf("%d ",k);
        printf("\n");
    }
    //lower half
   for(i=(urows-1);i>0;i--)
    {
        for(space=(urows-i);space>0;space--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=(i-1);k>0;k--)
            printf("%d ",k);
        printf("\n");
    }
    return 0;
}
