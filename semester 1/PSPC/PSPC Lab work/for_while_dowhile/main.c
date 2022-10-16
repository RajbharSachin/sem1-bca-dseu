#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    for(num=3;num>0;num--)
    {
        if(num)
        printf("Hello world!\n");
        switch(num)
        {
        case 2:
            printf("%d\n",num);
        default:
            ;
        }
    }
    while(num<3)
    {
        printf("hi\n");
        ++num;
    }
    do
    {
        printf("geeks for %ngeeks",&num);
    }while(num>3);
    return 0;
}
