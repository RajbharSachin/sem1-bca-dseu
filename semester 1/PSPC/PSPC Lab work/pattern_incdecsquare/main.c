#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,space,i,j,c,d;
    printf("Enter the odd no. of rows ");
    scanf("%d",&n);
    space=(n-1)/2;
    for(i=0;i<=n/2;i++) //for n/2+1 elements
    {
        j=0;
        if(space>0)
        { while(j!=space)
          {
            printf(" ");
            j=j+1;
          }
        }
        for(c=1;c<=i+1;c++)
            printf("%d",c);
        for(d=i;d>=1;d--)
            printf("%d" ,d);
        printf("\n");
        space=space-1;
    }
    for(i=n/2;i>=1;i--) //for n/2 elements
    {
        j=space+2;
        if(j>0)
        { while(j>0)
          {
           printf(" ");
           j=j-1;
          }
        }
        for(c=1;c<=i;c++)
            printf("%d",c);
        for(d=i-1;d>=1;d--)
            printf("%d",d);
        printf("\n");
        space=space+1;
    }
    return 0;
}

