#include <stdio.h>
int main(){
	int i,k;
	int values[2][3] ={{30,40,50},{60,70,80}};
	for (i=0;i<2;i++){
		for (k=0;k<3;k++)
	printf("values[%d][%d] = %d\n",i,k,values[i][k]);
	}
return 0;
}