#include<stdio.h>
int main()
{
    int dia, depth ;
    float vol;
    printf("Enter the dia :");
    scanf("%d",&dia);
    printf("Enter the debth :");
    scanf("%d",&depth);
    
    vol = (3.14 * dia * dia)/(4 * depth);
    printf("%f amount of flour is needed",vol);
}