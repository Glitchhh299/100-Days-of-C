//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/


#include<stdio.h>
int main()
{
	float profit,loss,cost,sell,profitpercentage,losspercentage;
	printf("Enter The Cost Price = ");
	scanf("%f",&cost);
	printf("Enter Selling Price = ");
	scanf("%f",&sell);
	
	profit = sell-cost;
	profitpercentage = (profit/cost)*100;
	loss = 	cost-sell;
	losspercentage = (loss/cost)*100;
	
	if (sell > cost)
	{
		printf("Profit = %.0f%%" ,profitpercentage);
	}
	else if (cost > sell)
	{
		printf("Loss = %.0f%%" , losspercentage);
	}
	else 
	{
		printf("No Profit No Loss");
	}
	return 0;
}