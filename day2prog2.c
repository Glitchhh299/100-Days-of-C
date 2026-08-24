#include<stdio.h>
int main()

{
    float r,area,circumference,pi=3.14159;
	printf("Enter Radius Of The Circle = ");
	scanf("%f",&r);
	area = pi*r*r;
	circumference = 2*pi*r;
	printf("Area = %.2f,Circumference = %.2f",area,circumference);
    return 0;
	
}