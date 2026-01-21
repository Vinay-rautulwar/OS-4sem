#include<stdio.h>
int main(){
int day;
printf("!!!!!! FOR MONDAY ENTER 1 AND FOR TUESDAY = 2 !!!");
printf("enter day as a number: ");
scanf("%d",&day);
switch(day){
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Invalid number !! NO day found");
}
}
