// to add to no using call by reference


// #include<stdio.h>
// int main()
// {
//     int add(int * ,int *);
//     int a,b;
//     printf("Enter a and b :");
//     scanf("%d%d",&a,&b);
//     printf("Adding : %d",add(&a,&b));
// }
// int add(int *ptr1,int *ptr2)
// {
//    return(*ptr1 + *ptr2);
// }


// to add two no


// #include<stdio.h>
// int main()
// {
//     printf("Enter the two numbers ");
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     printf("Adding :%d", *ptr1 + *ptr2);
// }


// print elements using pointer


// #include<stdio.h>
// int main()
// {
//     int arr[5];
//     for(int i=0;i<5;i++)
//     { 
//         printf("Enetr the elements in array:");
//         scanf("%d",&arr[i]);
//     }
    
//     int *ptr = arr;
//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",*(ptr+i)); 
//         printf("Usind arr :%d\n",arr[i]);
//         printf("%d\n",*ptr);
//         ptr++;
//     }
// }


// to make an array using pointer

// #include<stdio.h>
// int main()
// {
//     int *ptr[5];
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",ptr+i);
//     }
//     for(int i=0;i<5;i++)
//     {
//         printf("Address is : %d\n",*ptr + i);
//         printf("Value is : %d\n",*(ptr+i));
//     }
// }

// length of the strimg using pointer


// #include<stdio.h>
// int main()
// {
//     char s[30] = "Yash";
//     char *ptr = s;
//     int i;
//     for(i=1 ; *(ptr +i)!='\0'; i++);
//     printf("%d",i);
// }


// factorial of a number 


// #include<stdio.h>
// int main()
// {
//     int n =5;
//     int fact(int *);
//     printf("%d",fact(&n));
// }
// int fact(int *ptr)
// {
//     int f=1;
//     while(*ptr > 0)
//     {
//         f = f * *ptr;
//         *ptr = *ptr -1;
//     }
//     return f;
// }


// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3};
//     int (*ptr)[3] = a;
//     for(int i=0;i<3;i++)
//     {
//         printf("%d ",*( *ptr + i));
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5};
//     int *p;
//     p = a;
//     for(int i=0;i<5;i++)
//     {
//         // printf("%d ",*(p + i));
//         printf(" %d ",a[i]);
//     }
// }


// Function returning pointer


// #include<stdio.h>
// int main()
// {
//     int *fun(int * , int *);
//     int a = 6;
//     int b =7;
//     printf("%d",*(fun(&a,&b)));
// }

// int *fun(int *a ,int *b)
// {
//     if(*a > *b)
//      return a;
//     else 
//       return b;
// }


// copy array


// #include<stdio.h>
// int main()
// {
    // int arr[] = {1,2,3,4,5};
    // int *arr1[5];
    // for(int i=0;i<5;i++)
    // {
    //     arr1[i] = arr[4-i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d\n" , *(arr1 + i));
    // }

//     int arr1[3],arr2[3];
//     int *ptr = arr1;
//     int *ptr2 = arr2;
//     printf("Eneter elements in array :");
//     for(int i = 0;i<3;i++)
//     {
//         scanf("%d",(ptr +i));
//     }
//     for(int i = 0;i<3;i++)
//     {
//       *(ptr2 + i) = *(ptr + 2-i);
//     }
//     for(int i=0;i<3;i++)
//     {
//         printf("%d\n",*(ptr2 + i));
//     }
// }

// swap ywo array

// #include<stdio.h>
// int main()
// {
//     int arr1[] = {1,2,3} , arr2[] = {4,5,6} , *temp ;
//     int* ptr = arr1 ;
//     int* ptr2 = arr2 ;
//     for(int i = 0;i<3;i++)
//     {
//         temp = *(ptr + i);
//         *(ptr + i) = *(ptr2 +i);
//         *(ptr2 + i) = temp;
//     }
//     for(int i =0;i<3;i++)
//     {
//        printf("%d\n",*(ptr2 + i));
//     }
// }

// reverse array using pointer


// #include<stdio.h>
// int* rei(int *);
// int main ()
// {
//     int arr[4];
//     int* p1= arr;
//     for(int i=0;i<4;i++)
//     {
//         scanf("%d",p1 +i);
//     }
//     int* p = rei(arr);
//     for(int i =0;i<4;i++)
//     {
//         printf("%d\n",*(p+i));
//     }
// }

// int* rei(int *ptr)
// {
//     int temp;
//     for(int i =0;i<2;i++)
//     {
//         temp = *(ptr + 3-i);
//         *(ptr + 3-i) = *(ptr +i);
//         *(ptr +i) = temp;
//     }
//     return ptr;
// }


//copy string

// #include<stdio.h>
// char* stry(char*);
// int main()
// {
//    printf("%s",(stry("Yash")));
// }
// char* stry(char* str)
// {
//     return str;
// }


// #include<stdio.h>
// int* sort(int *);
// int main()
// {
//     int arr[] = {1,5,3,4,2};
//     int* p;
//     p = sort(arr);
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",*(p+i));
//     }
// }
// int* sort(int *p)
// {
//    int temp;
//    for(int i=0;i<5;i++)
//    {
//        for(int j=0;j<5;j++)
//         {
//             if (*(p+i) <= *(p+j))
//             {
//                 temp = *(p+i);
//                 *(p+i) = *(p+j);
//                 *(p+j) = temp;
//             }
//    }
//    }
//    return p;
// }


// #include<stdio.h>
// int main()
// {
//     int arr[]= {1,2,3,4,5};
//     int *p = arr;
    // for(int i = 0;i<4;i++)
    // {
    //     p[i] = arr[i];
    // }
//     for(int i=0;i<4;i++)
//     {
//         printf("%d " ,*(p+i));
//     }
// }


