#include <stdio.h>
int main () {
	int i =0, start ,stop,sum;
	printf("enter the value to start:");
	scanf("%d",&start);
	printf("enter the value when to stop:");
	scanf("%d",&stop);
	while (i<=100){
		printf("%d\n",i);
		i++;
		sum +=i;
		}
		printf("the sum is:%d",sum);
	return 0;
}
		