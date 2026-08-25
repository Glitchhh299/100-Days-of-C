//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>
int main()

{
	int C,F;
	printf("Enter Temperature In Celsius = ");
	scanf("%d",&C);
	F = (9.0/5.0*C)+32;
	printf("%d Celsius Converted In Fahrenheit Is %d",C,F);
	
	return 0;
}