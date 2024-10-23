//program to prompt the user to the declared values

/*
Author : BRIAN MUNENE
REG NO :CT101/G/21785/24
DATE :10/23/2024
*/


#include <stdio.h>
#include <string.h>

struct book{
	
	char Title [30];
	char Author [30];
	int publication_year;
	char ISBN [13];
	float price;
	
};

int main (){
	
	struct book book1;
	
	strcpy(book1.Title,"introduction to c programming");
	strcpy(book1.Author,"John smith");
	book1.publication_year =2022;
	strcpy(book1.ISBN,"9780131103627");
	book1.price =49.99;
	
	printf("Enter book title:");
	scanf("%s",book1.Title);
	
	printf("Enter Author:");
	scanf("%s",book1.Author);
	
	printf("Enter publication_year:");
	scanf("%d",&book1.publication_year);
	
	printf("Enter ISBN:");
	scanf("%s",book1.ISBN);
	
	printf("Enter price:");
	scanf("%.2f",&book1.price);
	
	
	return 0;
}
