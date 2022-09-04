#include<stdio.h>
    int main()
    {
        int m1 ,m2 ,m3;
        printf("Enter the height of the three people m1 for Rahul m2 for Rohit and m3 for Vishal :");
        scanf("%d%d%d",&m1,&m2,&m3);

        if(m1 > m2)
        {
            if(m1 > m3)
               printf("Rahul is Tallest");
        
            else
               printf("Vishal is Tallest");
        }
        else
        {
            if(m2 > m3)
               printf("Rohit is Tallest");
            else
               printf("Visahl is Tallest");
        }
    } 
