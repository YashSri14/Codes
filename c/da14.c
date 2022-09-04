#include<stdio.h>
#include <math.h>
int ENIGMA(float a,float b,float c){
float d,x1,x2,r,i;
d=b*b-4*a*c;
if(d>0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("first root x1= %f and second root x2=
%f\n",x1,x2);
}
else if(d==0){
x1=x2=-b/(2*a);
printf("both roots are equal x1=x2=%f\n", x1);
}
else {r=-b/(2*a);
i=sqrt(-d)/(2*a);
printf("first root x1= %f+%fi and second root x2= %.2f-%.2fi\n",r,i,r,i);
}
return 0;
}
int main(){
float a,b,c;
printf("enter the coefficients of a, b and c \n");
scanf("%f%f%f",&a,&b,&c);
printf("the quadratic equation is: %fx^2+%fx+%f\n",a,b,c);
ENIGMA(a,b,c);
return 0;
}