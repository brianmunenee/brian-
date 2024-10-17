// calculate the electricity bill using C function
/*
Author :Brian munene
REG NO: CT101/G/21785/24
*/
#include<stdio.h>
#include <string.h>

int miltiplication (int unitsconsumed,float chargeperunit);
int sum(float totalamounttopay,float surcharge);

int main (){
    int customerID,unitsconsumed;
    char customername;
    float chargeperunit,totalamounttopay,surcharge;

    printf("enter customerID:");
    scanf("%d",&customerID);
    printf("enter customername:");
    scanf("%s",&customername);
    printf("enter unitsconsumed:");
    scanf("%d",&unitsconsumed);

    if (unitsconsumed<=199){
        chargeperunit = 1.20;
        }

        else if (unitsconsumed <400){
            chargeperunit =1.50;
        }

        else if(unitsconsumed <600){
            chargeperunit =1.80;
        }

        else if (unitsconsumed >=600){
            chargeperunit = 2.00;
        
        }

totalamounttopay =unitsconsumed * chargeperunit;
        
 surcharge = totalamounttopay * 0.15;
 
        if (totalamounttopay >400){
           totalamounttopay = totalamounttopay+(totalamounttopay*0.15);
        }


        if (totalamounttopay <100){
            totalamounttopay =100;
        }

        printf("chargeperunit:%.2f\n",chargeperunit);
        printf("totalamounttopay :%.2f",totalamounttopay);

        return 0;
}

int multiplication(int unitsconsumed,float chargeperunit){
    int results;
    results = unitsconsumed * chargeperunit;
    return results;
}

int sum (float totalamounttopay,float surcharge){
    int results;
    results = totalamounttopay + surcharge;
    return results;
}
