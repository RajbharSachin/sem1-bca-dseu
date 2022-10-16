#include<stdio.h>
int main()
{
int i,sum=0;
int a[]={600,500,10,400,50,21};
int *ptr;
ptr=a;
for(i=0;i<6;i++){
     sum=sum + *ptr;
     ptr++;
}
printf("sum is:%d",sum);
return 0;
}
