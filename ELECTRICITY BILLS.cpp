//program to calculate and display the electricity bill as per the charges
#include <stdio.h>
int main (){
	int customerID ,unitconsumed;	
	char CustomerName;
	float chargeperunit,totalamounttopay,surcharge;
	
	printf("Enter the customerID:");
	scanf("%d",&customerID);
	
	printf("Enter the customerName:");
	scanf("%s",&CustomerName);
	
	printf("enter the units consumed:");
	scanf("%d",&unitconsumed);
	
	if(unitconsumed  <=199){
		chargeperunit = 1.20;}
	else if(unitconsumed  <400){
		chargeperunit =1.50;}
		else if (unitconsumed <600){
			chargeperunit =1.80;}
			else if(unitconsumed  >600){
				chargeperunit = 2.00;}
				
				// hoe to calculate totalamounttopay
				totalamounttopay =unitconsumed * chargeperunit;
				
				surcharge =totalamounttopay * 0.15;
				
				if (totalamounttopay >400){
					totalamounttopay =totalamounttopay +(totalamounttopay * 0.15);
				}
					 
					 if(totalamounttopay<100){
						totalamounttopay=100;
					 }
					 
					 printf ("chargeperunit :%.2f\n",chargeperunit);
					 printf("totalamounttopay:%.2f\n",totalamounttopay);
					
				return 0;
}
				
				
				
		
	
