#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*ptr;
    printf("Enter the size of 1D-array needed  ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    //allocated or not
    if(ptr==NULL)
    {
        printf("\nMemory Not allocated");
        exit(0);
    }
    else
    {
        printf("\nMemory successfully allocated using calloc");
        printf("\nEnter the elements\n");
        for(int i=0;i<n;++i)
            scanf("%d",ptr+i);
        printf("Elements are\n");
        for(int i=0;i<n;++i)
            printf("%d ",*(ptr+i));
    }
    printf("\n\nEnter the new size of array ");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    //reallocated or not
    if(ptr==NULL)
    {
        printf("\nMemory Not allocated");
        free(ptr);
        printf("\nMemory Deallocated using free");
        exit(0);
    }
    else
    {
        printf("\nMemory successfully allocated using realloc");
        printf("\nEnter the elements\n");
        for(int i=0;i<n;++i)
            scanf("%d",ptr+i);
        printf("Elements are\n");
        for(int i=0;i<n;++i)
            printf("%d ",*(ptr+i));
        free(ptr);
        printf("\nMemory Deaalocated using free");
    }
    return 0;
}
