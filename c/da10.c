#include<stdio.h>
#include<string.h>
int main(){
char A[10],B[10],C[10];
printf("enter the drink in glass A: ");
scanf("%s",A);
printf("enter the drink in glass B: ");
scanf("%s",B);
strcpy(C,A);
strcpy(A,B);
strcpy(B,C);
printf("the drink in glass A after the exchange is: %s\n",A);
printf("the drink in glass B after the exchange is: %s\n",B);
return 0;
}
