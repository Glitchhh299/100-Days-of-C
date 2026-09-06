//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/


#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter Number 1 = ");
	scanf("%d", &a);
	printf("Enter Number 2 = ");
	scanf("%d", &b);
	printf("Enter Number 3 = ");
	scanf("%d", &c);
	
	d = b*b - 4*a*c;
	
	int x,x1,x2;
	
	x = -b/(2*a);
	//scanf("%d",&x)
	x1 = (-b + sqrt(d))/(2*a);
	//scanf("%d",&x1)
	x2 = (-b - sqrt(d))/(2*a);
	//scanf("%d",&x2)
	
	if (d > 0)
	{
		printf("Roots Are Real And Different : %d, %d",x1,x2);		
	}
	else if(d == 0)
	{
		printf("Roots Are Real And Same : %d",x);
	}
	else
	{
		printf("Roots Are Complex");
	}
	return 0;
}