// program to prompt the user to enter students details
/*
AUTHOR:BRIAN MUNENE
REG NO: CT101/G/21785/24
*/

//c structures
#include <stdio.h>
#include<string.h>
struct student {
	char name[30];
	float height;
	char reg_no[15];
	char email[20];
	int phone_no;
};
int main (){
	
	struct student student1;
	
	printf("Enter name:",student1.name);
	scanf("%s",student1.name);
	
	printf("Enter height:",student1.height);
	scanf("%f",&student1.height);
	
	printf("Enter reg_no:",student1.reg_no);
	scanf("%s",student1.reg_no);
	
	printf("Enter email:",student1.email);
	scanf("%s",student1.email);
	
	printf("Enter phone_no:");
	scanf("%d",&student1.phone_no);

	return 0;
	
	
}
