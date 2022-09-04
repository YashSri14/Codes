// #include <stdio.h>

// int main(){

//     int arr[] = {1, 2 ,3 ,4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int n = size/2;

//     for(int i = 0; i<n; i++){
//         int temp = arr[i];
//         arr[i] = arr[size - i - 1];
//         arr[size - i - 1] = temp;
//     }

//     for(int i = 0; i<size; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
   int main()
   {
       int n;
       scanf("%d",&n);
       int* ptr = (int*)malloc(n*  sizeof(int));  //malloc to declare dyamic array in malloc the defalut are initialize with NULL

                            //    or 


        //  int* ptr = (int*)calloc(n,sizeof(int));  // calloc to declare array it initialize the default value with 0
        
       for(int i=0;i<n;i++)
       {
           scanf("%d",ptr+i);              // to input elements in aaray it is similar to arr[i]. 
    
       }

       for(int i=0;i<n;i++)
       {
           printf("%d ",*(ptr+i));        //to print the value in dma.
       }


     free(ptr); // to delete the space allocated in the memory after the use of dma
   }
