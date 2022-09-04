// #include<stdio.h>
// int main()
// {
//     int num = 5;
//     static int num1 = num;
//     if(num == num1)
//     {
//         printf("Equal");
//     }
// }

#include<stdio.h>
#include<stdlib.h>
void add(int*,int );

int main()
{
    int *ptr;
    for(int i=0;i<3;i++)
    {
        scanf("%d",ptr+i);
    }
    add(ptr,3);
}

void add(int* ptr1,int n)
{
    int a = 0;
    for(int i=0;i<n;i++)
    {
        a = a + *(ptr1+i);
    }
    printf("%d ",a);
}