//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/


#include<stdio.h>
int main() 
{
	int i,b,sum=0;
	printf("Enter Last Number = ");
	scanf("%d",&b);
	for(i=1; i<=b; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}