#include<stdio.h>
int main()
{
    float n;
    printf("Enter the Ritcher Scale Number :");
    scanf("%f",&n);
    
    if(n < 5.0)
      printf("Little or no damage");
    else if(n <5.5)
      printf("Some damage");
    else if(n < 6.5)
      printf("Disaster");
    else 
      printf("Catastrophic");
}