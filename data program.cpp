//program to prompt the user to enter a sentence upto 100 characters
/*
AUTHOR :BRIAN MUNENE
REG NO:CT101/G/21785/24
*/

# include <stdio.h>
# include <stdlib.h>

int main (){
	
	char sentence[100];
	
	FILE* fptr;
	
	fptr =fopen ("C:\\Users\\USER\\Desktop\\assigment.c\\brian-\\data.txt","w");
	
	if (fptr ==NULL){
		printf("error opening th file");
		exit (1);
	}
	
	printf("enter the sentence:\n");
	scanf("%s",sentence);
	fgets (sentence,(sizeof sentence),stdin);
	fprintf(fptr,"s",sentence);
	
	fclose(fptr);
	return 0;
	
}