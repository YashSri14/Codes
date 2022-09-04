#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int odd[5];
    int even[5];
    int j =0;int k =0;
    int temp;
    for(int i=0;i<n;i=i+2)
    {
       even[j++] = arr[i];
    }

    for(int i=1;i<n;i=i+2)
    {
       odd[k++] = arr[i];
    }

    for(int i =0;i<j;i++)
    {
        for(int a=0;a<j;a++)
        {
            if(even[i] > even[a])
            {
                temp = even[i];
                even[i] = even[a];
                even[a] =  temp;
            }
        }
    }

    for(int i =1;i<j;i++)
    {
        for(int a=1;a<j;a++)
        {
            if(odd[i] < odd[a])
            {
                temp = odd[i];
                odd[i] = odd[a];
                odd[a] =  temp;
            }
        }
    }
    
    for(int i =0;i<k;i++)
    {
        printf("%d\n",odd[i]);
    }
    
    for(int i =0;i<j;i++)
    {
        printf("%d\n",even[i]);
    }

    
}