//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/


#include<stdio.h>
int main()
{
	int x;
	
	printf("Enter The Number = ");
	scanf("%d",&x);
	
	if (x >= 0) 
	{
		if (x>0)
		{
			printf("%d is Postive",x);
		}
		else{
			printf("%d is Zero",x);
		}
	}
	else
	{
		printf("%d is Negative",x);
	}
	
	
	
	
}