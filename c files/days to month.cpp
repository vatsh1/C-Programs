#include<stdio.h>
#include<conio.h>
main ()
 {
 	int months, days ;
 	printf("enter days\n");
 	scanf("%d", &days) ;
 	months=days/30;
 	days=days%30;
 	printf("month=%d days=%d", months, days);
 }
