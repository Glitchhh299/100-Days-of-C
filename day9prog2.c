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