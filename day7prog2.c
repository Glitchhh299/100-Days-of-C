//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/


#include<stdio.h>
int main()
{
	char c;
	printf("Enter a Character = ");
	scanf("%c",&c);
	
	if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("%c is A Vowel", c);
	}
	else
	{
		printf("%c is a Consonant", c);
	}
	
	return 0;
}
