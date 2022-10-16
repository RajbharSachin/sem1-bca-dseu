#include<stdio.h>
#include<math.h>

 int*returnaddress (int a[],int n);
 main()
 {
   int a[]={1,2,3,4,5,6},i;
   printf("Enter ith number ");
   scanf("%d",&i);
   int*ptr = returnaddress (a,i);
   printf("base address= %d\n",a); //base address(address of 0th element)
   printf("address value of ith element= %d",ptr); //address of ith element
   return 0;
 }
 int*returnaddress(int a[],int n)
 {
     int*p;
     p=a;
     p=p+n;
     return p;
 }
