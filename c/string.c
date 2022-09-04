// #include<stdio.h>
// #include<string.h>
// char* upper(char*);
// int main()
// {
//     char str[30] = "Yash Srivastava";
//     int len = strlen(str);
//     // printf("%d",len);
    
//     printf("%s",upper(str));

// }

// char* upper(char* str1)
// {
//     for(int i=0;i<15;i++)
//     {
//         if(str1[i] != ' ')
//             if(str1[i]>=97 && str1[i]<=122)
//                 str1[i] = str1[i]-32;
//     }
//     return str1;
// }

// #include<stdio.h>
// int* add(int*);
// int main()
// {
//     int arr[3] = {1,2,3};
//     add(arr);
//     for(int i=0;i<3;i++)
//     {
//        printf("%d ",arr[i]);
//     }

// }

// int* add(int* arr)
// {
//     int sum = 0;
//     for(int i=0;i<3;i++)
//     {
//         arr[i] = arr[i] * 2;
//     }
//     return arr;
// }

// #include<Stdio.h>
// #include<string.h>
// struct student
// {
//     int marks;
//     char name[30];
//     char r[10];
// };
// void add(struct student*,int);
// int main()
// {
//     int n ;
//     printf("Enter n:");
//     scanf("%d",&n);
//     struct student s[n];
//     for(int i=0;i<n;i++)
//     {
//         printf("Enter marks and name:");
//         scanf("%d",&s[i].marks);
//         scanf("%s",s[i].name);
//     }
//     add(s,n);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",s[i].marks);
//         printf("%s\n",s[i].r);
//     }
// }

// void add(struct student* s1,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(s1[i].marks > 10)
//         {
//             strcpy(s1[i].r,"Pass");
//         }
//         else
//              strcpy(s1[i].r,"Fail");
//     }
// }

// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     int marks[3];
//     char name[30];
//     int per;
// };

// int n;

// struct student* add(struct student*);

// int main()
// {
//     printf("Enter n:");
//     scanf("%d",&n);
//     struct student s[n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("Enter marks :");
//             scanf("%d",&s[i].marks[j]);
//         }
//         scanf("%s",s[i].name);
//     }
    
//     add(s);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d ",s[i].marks[j]);
//         }
//         printf(" %s",s[i].name);
//         printf(" %d\n",s[i].per);
//     }
// }
// struct student* add(struct student*  s1)
// {
//     int tot = 0;
//     for(int i=0;i<n;i++)
//     {
//         tot =0;
//         for (int j = 0; j < 3; j++)
//         {
//             tot = tot + s1[i].marks[j];
//         }
//         s1[i].per = tot;
//     }
//     return s1;
// }


#include<stdio.h>
#include<math.h>

int main()
{
    int n , size=0,ld;
    printf("Enetr n :");
    scanf("%d",&n);
    
    int p = n;
    while(n > 0)
    {
        size++;
        n = n / 10;
    }

    printf("%d %d\n", size, p);

    for(int i=0;i<size;i++)
    { 
        // printf("%d\n", p);
        ld = p % 10;
        p /= 10;
        p += (pow(10, size-1)*ld);
        
        printf("%d\n", p);
    }
    return 0;
}