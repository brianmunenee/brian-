//PROGRAM TO PRINT THE VALUES OF THE FIELDS

/*
AUTHOR :BRIAN MUNENE
REG NO :CT101/G/21785/24
DATE :10/22/2024
*/

#include <stdio.h>
#include <string.h>

struct book{
	
	
	char Title[50];
	char Author [30];
	int publication_year;
	char ISBN [13];
	float price;
	
};

int main (){
	
	struct book book1;
	
	strcpy(book1.Title,"introduction_to_cprogramming");
	strcpy(book1.Author, "John smith");
	book1.publication_year = 2022;
	strcpy(book1.ISBN, "9780131103627");
	book1.price = 49.99;
	
	
	
	printf("title:%s\n",book1.Title);
	printf("author:%s\n",book1.Author);
	printf("year:%d\n",book1.publication_year);
	printf("isbn:%s\n",book1.ISBN);
	printf("price:%.2f\n",book1.price);
	
	return 0;
}