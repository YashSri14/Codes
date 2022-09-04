// #Q8

// #include <stdio.h>
// #include <stdlib.h>
// int value(int *, int);
// int main()
// {
//     int n;
//     printf("Enter the value of n :");
//     scanf("%d", &n);
//     int *ptr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the values :");
//         scanf("%d", ptr + i);
//     }
//     printf("Value of k is : %d",value(ptr, n));
// }

// int value(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (*(ptr + i) != 1)
//             return i;
//     }
// }


// Q7

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//    int year;

//    printf("enter the birth year :");
//    scanf("%d", &year);
//    int *ptr = (int *)malloc(4 * sizeof(int));
//    int *pin = (int *)malloc(4 * sizeof(int));
//    *pin = 0;
//    int i = 3;
//    while (year > 0)
//    {
//       ptr[i] = year % 10;
//       year = year / 10;
//       i--;
//    }
//    for (int i = 1; i < 4; i++)
//    {
//       ptr[i] += ptr[i - 1];
//    }
//    for(int i=0;i<4;i++)
//    {
//       int tens,ones;
//       if(ptr[i]>=10)
//       {
//          tens = ptr[i]/10;
//          ones = ptr[i]%10;
//          if(tens > ones)
//             (*pin) = (*pin)*10 + ones;
//          else 
//             (*pin) = (*pin)*10 + tens;
//       }
//       else
//          (*pin) = (*pin)*10 + ptr[i];
//    }
//    printf("%d",*pin);
   
// }


// Q9


#include<stdio.h>
#include<stdlib.h>

int calc(float* , int* , int*);
int main()
{
   float* si = (float*)malloc(1*sizeof(float));
   int* r = (int*)malloc(1*sizeof(int));
   int* t = (int*)malloc(1*sizeof(int));
   float* amt = (float*)malloc(1*sizeof(float));
   printf("Enter SI Rate and T : ");
   scanf("%f%d%d",si,r,t);
   *amt = (calc(si,r,t));
   printf("The original amount borrowerd is : Rs. %0.2f",*amt);
}

int calc(float* si,int* r,int* t)
{
   
   return  (((*si)*100)/((*r) * (*t)));

}

// Q5

// #include <stdio.h>
// #include<string.h>
// struct bmi
// {
//    float weight;
//    float height;
//    float bmi;
//    char cat[30];
// } s[3];
// float info(struct bmi *, int n , float per);
// int main()
// {
//    float per;
//    for (int i = 0; i < 3; i++)
//    {
//       printf("Enter the weight and height :");
//       scanf("%f %f", &s[i].weight, &s[i].height);
//    }
//    per = info(s, 3, 0);
//    for (int i = 0; i < 3; i++)
//    {
//       printf("Body mass index for %d is : %0.2f and the person is in cat of %s\n",i+1,s[i].bmi,s[i].cat);
//    }
   
// }

// float info(struct bmi *c, int n , float per)
// {
//    int count = 0;
//    for (int i = 0; i < 3; i++)
//    {
//       c[i].bmi = (c[i].weight) / (c[i].height * c[i].height);
//       if (c[i].bmi >= 30)
//       {
//          strcpy(c[i].cat,"Obesity");
//          count++;
         
//       }
//       else if(c[i].bmi >=25 && c[i].bmi < 30)
//          strcpy(c[i].cat,"Overweight");

//       else 
//           strcpy(c[i].cat,"Fit");
//    }
//    per = (((count / n)) * 100);
   
//    return per;
//  }


// Q3

// #include<stdio.h>
// int main()
// {
//    char name[30];
//    int i;
//    printf("Enter the name :");
   
//    scanf("%s",name);
   
//    for(i=0;name[i]!='\0';++i);
   
//    for(int j=0;j<=i;j=j+2)
//    {
   
//      printf("%c",name[(i-1)-j]);
   
//    }
// }

//  Vidul
//  l = 4
//  u = 3
//  d = 2
//  i = 1
//  V = 0  

//  Yash
//  h = 3
//  s = 2
//  a = 1
//  Y  = 0

// Abhijit
// t = 6
// i = 5
// j = 4
// i = 3
// h = 2
// b = 1
// A = 0


// Q6

// #include <stdio.h>
// #include <stdlib.h>

// int recursive(int);
// int main()
// {
//    int n;
//    printf("enter the no of customers :");
//    scanf("%d", &n);
//    int *ptr = (int *)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++)
//    {
//       printf("Enter into array :");
//       scanf("%d", ptr + i);
//    }

//    printf("%d", recursive(*ptr));
// }
// int f = 0;
// int recursive(int n)
// {
//    if (n > 0)
//    {
//       f = f + (n % 10);
//       n = n / 10;
//       recursive(n);
//    }
//    return f;
// }



// #include <stdio.h>

// #include <string.h>

// int main()
// {

//    int r, s, f, t = 0;

//    char a[1];

//    while (t == 0)
//    {

//       printf("enter Y or N \n");

//       scanf("%c", a);
//       if (strcmp(a, "Y") == 0)
//       {

//          printf("enter the Relevant IS of the cement\n");

//          scanf("%d", &r);

//          printf("enter the Strength of the cement\n");

//          scanf("%d", &s);

//          printf("enter the Fineness of the cement\n");

//          scanf("%d", &f);

//          if (r == 269 && s == 16 && f == 225)
//          {

//             printf("33 Grade OPC\n");
//          }
//       }

//       else if (r == 8112 && s == 23 && f == 225)
//       {

//          printf("43 Grade OPC\n");

         
//       }

//       else if (r == 12269 && s == 27 && f == 225)
//       {

//          printf("53 Grade OPC\n");

//       }

   

//    else if (strcmp(a, "N") == 0)
//    {

//       printf("exiting the operation\n");

//        t = 1;

      
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int n, c1, c2, s = 0, t, a;
//    printf("enter the ISBN number\n");
//    scanf("%d", &n);
   
//     c1 = n / 10;
//     c2 = n % 10;
//     a = c1 % 1000000;

//     while (a > 0)
//    {
      
//       t = a % 10;
//       s += t;
//       a /= 10;
//    }     

//    if (s % 10 == c2)
//    {
//       printf("Valid ISBN number\n");
//    }
//    else
//    {
//     printf("Invalid ISBN number\n");
//    }
//    return 0;
// }