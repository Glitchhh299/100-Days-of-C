//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/


#include<stdio.h>
int main()
{
	int total, hours, minutes, seconds, remaining;
	
	printf("Enter Time In Seconds = ");
	scanf("%d",&total);
	
	hours = total/3600;
	remaining = total%3600;
	minutes = remaining/60;
	seconds = remaining%60;
	
	printf("%d:%d:%d",hours,minutes,seconds);
	return 0;
	
}