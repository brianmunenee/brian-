// program to enter students details
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

	strcpy(student1.name, "brian");
	student1.height = 5.7;
	
	strcpy(student1.reg_no, "CT101/G/21785");
	strcpy(student1.email, "brian@gmail.com");
	student1.phone_no = 123652;
	
	printf("name:%s\n",student1.name);
	printf("height:%.2f\n",student1.height);
	printf("reg_no:%s\n",student1.reg_no);
	printf("email:%s\n",student1.email);
	printf("phone_no:%d\n",student1.phone_no);
	
	
	return 0;
	
	
}
