//program to read data entered into data.txt
/*
AUTHOR:BRIAN MUNENE
REG NO:CT101/G/21785/24
*/



# include <stdio.h>
# include <stdlib.h>

int main (){
	

	FILE *fptr;
	
	fptr =fopen ("C:\\Users\\USER\\Desktop\\assigment.c\\brian-\\data.txt","r");
	
	if (fptr ==NULL){
		printf("error opening the file:");
		exit(1);
	}
	
	char sentence[100];
	
	while (fgets(sentence,sizeof(sentence),fptr)){
		printf ("%s",sentence);		
	}
	return 0;
}