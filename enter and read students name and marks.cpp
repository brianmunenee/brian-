// c program to read name and marks of n number of student and store in a file
/*
AUTHOR:BRIAN MUNENE
REG NO:CT101/G/21785/24
*/

# include <stdio.h>
# include <stdlib.h>

int main (){
	
	char name[20];
	int marks,num;

	printf("enter number of students:");
	scanf("%d",&num);
	
	FILE *fptr;
	fptr =fopen("C:\\Users\\USER\\Desktop\\munene\\student.txt","w");
	
	if (fptr==NULL){
		printf("error opening the file:");
		exit(1);
	}
	
	
	
	for (int i=0;i<num;++i){
		
		printf("for student %d\n Enter name:",i+1);
		scanf("%s",name);
		
		printf("Enter marks:");
		scanf("%d",&marks);
	}
		
		fprintf(fptr,"\n Name:%s \n marks =%d\n",name,marks);
	
	
	fclose(fptr);
	return 0;
}
		
	
