#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double table (double(*fptr)(double a),double min,double max,double step);
double y(double x);

double flag=0;

 void main()
 {
     double result;
     result=table(y,0,2,0.5);
     printf("\nFinal value of x^2-x+1 is %f",result);
     printf("\n\n");
     result=table(sin,0,M_PI,0.5);
     printf("\nFinal value of sin is %f",result);
 }
 double y(double x)

 {
    return (x*x-x+1);
 }
 double table (double(*fptr)(double a),double min,double max,double step)
 {
     double value;
     for(double i=min;i<=max;i+=step)
     {
         value=(*fptr)(i);
         if(flag==0)
            printf("Value of x^2-x+1 at %f is %f\n",i,value);
         else
            printf("Value of sin at %f is %f\n",i,value);
     }
     flag=1;
     return value;
 }
