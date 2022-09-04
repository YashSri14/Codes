// #include<stdio.h>
// struct marks
// {
//     int m1 , m2 ,tot;
// }s;

// int main()
// {
//     scanf("%d %d",&s.m1,&s.m2);
//     s.tot = s.m1 + s.m2;
//     printf("%d",s.tot);
// }


#include<stdio.h>
#include<string.h>
struct player
{
    char name[30];
    int id,runs,w;
}csk[3];
int main()
{
    for(int i=0;i<3;i++)
    {
        printf("Enter the %d info:",i);
        scanf("%s",csk[i].name);
        scanf("%d%d%d",&csk[i].id,&csk[i].runs,&csk[i].w);
    }
    for(int i=0;i<3;i++)
    {
        printf("%s\n",csk[i].name);
        printf("%d %d %d\n",csk[i].id,csk[i].runs,csk[i].w);
    }
}