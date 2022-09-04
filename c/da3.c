#include <stdio.h>
int sum()
{
int n1,n2;
printf("enter the first number: ");
scanf("%d",&n1);
printf("enter the second number: ");
scanf("%d",&n2);
int sum1=0,sum2=0;
int sum=0;
while (n1!=0){
sum1=sum1+n1%10;
n1=n1/10;
}
while (n2!=0)
{
sum2=sum2+n2%10;
n2=n2/10;
}
sum=sum1+sum2;
return sum;
}
int mul()
{
int n1,n2;
printf("enter the first number: ");
scanf("%d",&n1);
printf("enter the second number: ");
scanf("%d",&n2);
int product1=1,product2=1;
int product=1;
while (n1!=0)
{
product1=product1*(n1%10);
n1=n1/10;
}
while (n2!=0)
{
product2=product2*(n2%10);
n2=n2/10;
}
product=product1*product2;
return product;
}
int rev()
{
int n,reverse=0,remainder;
printf("enter the number: ");
scanf("%d",&n);
while (n!=0)
{
remainder=n%10;
reverse=reverse*10+remainder;
n/=10;
}
return reverse;
}
int main()
{
int a;
char b;
printf("Enter the operation: ");
scanf("%c",&b);
switch(b)
{
case '+':
a=sum();
printf("the output is: %d\n",a);
break;
case '*':
a=mul();
printf("the output is: %d\n",a);
break;
case '$':
a=rev();
printf("the output is: %d\n",a);
break;
default:
printf("Invalid Input\n");
break;
}
return 0;
}
