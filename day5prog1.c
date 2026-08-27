//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/


#include<stdio.h>
#include<math.h>
int main()
{
	int principal,rate,time,si;
	float ci;
	printf("Enter Principal = ");
	scanf("%d%",&principal);
	printf("Enter Rate = ");
	scanf("%d%",&rate);
	printf("Enter Time = ");
	scanf("%d%",&time);

	si = (principal*rate*time)/100;
	printf("Simple Interest = %d\n", si);
	
	ci = principal*pow((1+rate/100.0),time) - principal;
	printf("Compound Interest = %.2f", ci);
	return 0;
	
}