//the program to calculate the compound_interest
/*
Author:Brian munene
Reg No:CT101/G/21785/24
Date:25/9/2024
*/
#include <stdio.h>
int main () {
	int p,r,t,n,A ;
	printf("Enter the principal:");
	scanf("%d",&p);
	printf("enter the rate of interest:");
	scanf("%d",&r);
	printf("Enter the period of time in years:");
	scanf("%d",&t);
	printf("Enter the rate of interest compounded annually:");
	scanf("%d",&n);
	//how to calculate the compound_interest
	A =p*((1+r/n),n*t);
	float ci =A-p ;
	printf("the compound_interest is :%.2f",ci);
	return 0;
}
	