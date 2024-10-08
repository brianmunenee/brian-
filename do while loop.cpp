#include <stdio.h>
int main () {
	int  i =0 ,start,stop,sum=0;
		printf("%d",start);
		printf("enter the value for when to start:"); 
        scanf("%d",&start);
     		printf("enter the value when to stop:");
		scanf("%d",&stop);
		
		do {
			printf("%d \n",i);
		i++;
		sum +=i;} 
		while (i <=stop);
		printf("the sum is :%d",sum);
		
	return 0;
}