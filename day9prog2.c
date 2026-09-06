/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/


#include<stdio.h>
int main()
{
	int n;
	printf("Enter Your Percentage = ");
	scanf("%d",&n);
	if (n>=90 && n<=100)
	{
		printf("A Grade");
	}
	else if (n>=80 && n<90)
	{
		printf("B Grade");
	}
	else if (n>=70 && n<80)
	{
		printf("C Grade");
	}
	else if (n>=60 && n<70)
	{
		printf("D Grade");
	}
	else if (n>=50 && n<60)
	{
		printf("E Grade");
	}
	else if (n>=40 && n<50)
	{
		printf("F Grade");
	}
	else if (n>100)
	{
		printf("Percentage does not exist");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}