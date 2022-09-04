#include<stdio.h>
int main()
{
   int n ,m, sal ,tot;
   printf("Enter the day of joining :");
   scanf("%ld",&n);
   m = n*n ;
   for(int i=n+1;i<30-n;i++)
   {
       sal  = 2*m;
       tot = tot +sal ;
       m = sal;
   }
   printf("%ld",tot);
}