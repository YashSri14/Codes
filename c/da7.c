#include<stdio.h>
int main()
{
   float hours ;
   printf("Enter the hours :");
   scanf("%f",&hours);
   float wages;
   if(hours < 8)
      wages = 200;
   else if(hours <= 12)
      wages = 200 + (hours - 8)*100;
   else if(hours <= 16)
      wages = 200 + 4 * 100 + (hours - 12)*200;
   else  
      wages = 200 + 4*100 + 4*200 + (hours -16)*250;
    printf("The wage of the labour is : %0.2f",wages);
} 