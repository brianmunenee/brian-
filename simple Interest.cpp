//program to calculate the simple_interest
/*
Author:Brian munene
Reg No:CT101/G/2024
Date:25/9/2024
*/
#include <stdio.h>
int main(){
	int principal,rate,time;
	printf("Enter the principal:");
	scanf("%d",&principal);
	printf("Enter the rate:");
	scanf("%d",&rate);
	printf("Enter the time:");
	scanf("%d",&time);
	//how to clculate the simple_interest
	float simple_interest =(principal *rate*time)/100;
	printf("the simple_interst is :%.2f",simple_interest);
	return 0;
}