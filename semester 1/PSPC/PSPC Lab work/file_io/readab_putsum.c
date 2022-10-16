#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sum.txt","r");
    int a,b;
    if(fptr == NULL)
    {
        printf("file doesn't exist");    
    }
    else
    {
        fscanf(fptr,"%d",&a);
        fscanf(fptr,"%d",&b);
        fclose(fptr);   
    }
    
    fptr = fopen("sum.txt","w");
    if(fptr == NULL)
    {
        printf("file doesn't exist");    
    }
    else
    {
        fprintf(fptr,"%d",a+b);  
        fclose(fptr);     
    }
    
    fptr = fopen("sum.txt","r");
    if(fptr == NULL)
    {
        printf("file doesn't exist");    
    }
    else
    {
        int sum=0;
        fscanf(fptr,"%d",&sum);
        printf("sum is = %d",sum);
        fclose(fptr);
    }
    
    return 0;
}