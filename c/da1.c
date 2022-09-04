#include <stdio.h>
int main(){ 
int
reference_year=2001,year,leap_year=0,non_leap_year,diff,total_days=0,day=0
; 
printf("Enter the year: "); 
scanf("%d",&year); 
diff=year-reference_year;
non_leap_year=diff-leap_year;
while(reference_year<year){ 
if(reference_year%100==0){ 
if(reference_year%400==0) 
leap_year++;
} 
else{ 
if(reference_year%4==0)
leap_year++; 
} 
reference_year++; 
} 
total_days=(diff-leap_year)*365+leap_year*366; 
day=total_days%7; 
printf("The day on first January of %d is: ",year); 
switch(day){ 
case 0: 
printf("Monday\n");
case 1: 
printf("Tuesday\n"); 
break; 
case 2: 
printf("Wednesday\n"); 
break; 
case 3:
printf("Thursday\n"); 
break; 
case 4: 
printf("Friday\n"); 
break; 
case 5: 
printf("Saturday\n"); 
break; 
case 6: 
printf("Sunday\n"); 
break; 
} 
return 0;
}