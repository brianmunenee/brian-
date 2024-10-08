#include <stdio.h>
int main (){
	int i=0, start,stop;
	printf("Enter the starting number:");
	scanf("%d",&start);
	printf("Enter the stopping number:");
	scanf("%d",&stop);
	for(int i=start;i<=stop;i++){
				printf("%d\n",i);
			}
	return 0;
}