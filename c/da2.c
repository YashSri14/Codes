#include<stdio.h>
int main()
{  float n1,n2,n3,n4,n5,tot;
   int q1,q2,q3,q4,q5 ;
   printf("Enter the product 1 :");
   scanf("%d%f",&q1,&n1);
  
   printf("\nEnter the product 2 :");
   scanf("%d%f",&q2,&n2);
   
   printf("\nEnter the product 3 :");
   scanf("%d%f",&q3,&n3);
   
   printf("\nEnter the product 4 :");
   scanf("%d%f",&q4,&n4);
  
   printf("\nEnter the product 5 :");
   scanf("%d%f",&q5,&n5);
   
   
   printf("\nProduct 1 one day sale : %f",q1*n1);
   printf("\nProduct 2 one day sale : %f",q2*n2);
   printf("\nProduct 3 one day sale : %f",q3*n3);
   printf("\nProduct 4 one day sale : %f",q4*n4);
   printf("\nProduct 5 one day sale : %f",q5*n5);
   tot = 7*((q1*n1) + (q2*n2) + (q3*n3) + (q4*n4) + (q5*n5));
   printf("\n The total sale of the lastn week is : %f",tot);
}