//proram to calculate the total fine for overkeeping library books
/*
Author:Brian munene
Reg No:CT101/G/21785/24
Date:25/9/2024
*/
#include <stdio.h>
int main() {
	int Duedate,returndate,Daysoverdue,chargeperday,finerate;
	int BookID;
	printf ("Enter BookID:");
	scanf("%d",&BookID);// enter integer
	printf("Enter Duedate:"); 
	scanf("%d",&Duedate);
	printf("Enter returndate:");
	scanf("%d",&returndate);
	// how to calculate Daysoverdue
	Daysoverdue =returndate-Duedate;
	if (Daysoverdue <=7) {
		chargeperday =20; }
		else if (Daysoverdue>=8 && Daysoverdue <=14) {
			chargeperday =50; }
			else if(Daysoverdue>=15) {
				chargeperday =100; } 
				//how to calculate finerate
				 finerate=chargeperday*Daysoverdue;
				//how to calculate totalfine
				float totalfine = chargeperday*Daysoverdue;
				printf("number of Daysoverdue is:%d\n",Daysoverdue);
				printf("%d*%d=%d\n",chargeperday,Daysoverdue,finerate);
				printf("the totalfine is :%.2f\n",totalfine);
				return 0;
}