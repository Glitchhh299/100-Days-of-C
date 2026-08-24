#include<stdio.h>
int main()

{
  int l,b,p,a;
	printf("Enter Length And Breadth = ");
	scanf("%d%d",&l,&b);
	p = (l+b)*2;
	a = l*b;
	printf("Perimeter = %d, Area = %d\n",p,a);
	
}
