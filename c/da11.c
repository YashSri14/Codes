#include<stdio.h>
#include<string.h>
int main()
{
char a;
printf("enter the color of cylinder: ");
scanf("%c",&a);
if(a=='O'||a=='o')
printf("Ammonia\n");
else if(a=='B'||a=='b')
printf("Carbon monoxide\n");
else if(a=='Y'||a=='y')
printf("Hydrogen\n");
else if(a=='G'||a=='g')
printf("Oxygen\n");
else
printf("Invalid Input\n");
return 0;
}