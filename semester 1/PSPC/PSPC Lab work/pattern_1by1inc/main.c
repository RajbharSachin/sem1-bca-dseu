#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=1,n;
    printf("Enter no. of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",k);
            k=k+1;
        }
        printf("\n");
    }
    return 0;
}
