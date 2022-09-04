#include <stdio.h>
int main()
{
    int tan[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the element :");
            scanf("%d", &tan[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
            sum = sum + tan[j][i];

        printf("\nMonthly sum is : %d", sum);
    }
}