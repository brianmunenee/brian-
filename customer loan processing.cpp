//the program find the elligibility for loan application
/*
Author:Brian munene
Reg No:CT101/G/21785/24
Date:25/9/2024
*/
#include <stdio.h>
int main (){
	int age,annual_income;
	printf("Enter the age:");
	scanf("%d",&age);
	printf("Enter the annual_income:");
	scanf("%d",&annual_income);
	if (age >=21 && annual_income >=21000) {
		printf("congratulations you qualify for a loan:"); }
		else {
			printf("unfortunately,we are unable to offer you a loan at this time:");
		}
		return 0;
}
		