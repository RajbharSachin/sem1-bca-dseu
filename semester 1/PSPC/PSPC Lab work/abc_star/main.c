#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,space=0;
    for(m=5;m>=1;m--)
    {
        for(n=1;n<=m;n++)
        {
            printf("*\t");
        }
        printf("\n");


        space+=1; //incrementing space after each row
        for(n=1;n<=space;n++) //printing spaces
        {
            printf("\t");
        }
    }
    return 0;
}
