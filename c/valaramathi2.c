#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    int arr[c];
    int p=0; int n=0; int o=0;
    for (int i = 0; i < c; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0)
           p++;

        else if(arr[i]<0)
           n++;
        
        else 
           o++;
    }
    int negative[n];
    int positive[p];
    int zero[o];
    n =0; p =0;o = 0;
    for (int i = 0; i < c; i++)
    {
        if(arr[i] > 0)
           positive[p++] = arr[i];

        else if(arr[i]<0)
           negative[n++] = arr[i];
        
        else 
           zero[o++] = arr[i];
    }
     
   
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(negative[i] > negative[j])
            {
               temp = negative[i];
               negative[i] = negative[j];
               negative[j] = temp;
            }
        }
    }

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(positive[i] < positive[j])
            {
               temp = positive[i];
               positive[i] = positive[j];
               positive[j] = temp;
            }
        }
    }
     
    for(int i=0;i<n;i++)
    {
        printf("%d ",negative[i]);
    }
    
    for(int i=0;i<o;i++)
    {
        printf("%d ",zero[i]);
    }
    for(int i=0;i<p;i++)
    {
        printf("%d ",positive[i]);
    }

}