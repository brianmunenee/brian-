//program to calculate and display the electricity bill as per the charges
#include <stdio.h>
int main (){
	int customerID ,totalamounttopay,unitconsumed;
	
	char CustomerName;
	float chargeperunit ;
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
				printf("charge per unit %.2f\n",chargeperunit);
				
				totalamounttopay=unitconsumed * chargeperunit;
					printf("the totalbill :%d\n",totalamounttopay);
				
				
				// how to calculate the totalbill
				float totalbill =unitconsumed*chargeperunit;
				if (totalbill >400){
					 totalamounttopay =totalbill+(totalbill*0.15);
				}
					else if(totalamounttopay<=100){
						totalamounttopay=100;
					}
					
				
			
			
				
				return 0;
}
				
				
				
		
	
