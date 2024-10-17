/*
AUTHOR:BRIAN MUNENE
REG NO: CT101/G/21785/24
*/

#include <stdio.h>
int main(){
	int i,k,j;
	int values[2][2][5] ={
	{
	{1,2,3,4,5},
	{6,7,8,9,10}},
		
	{
		
	{11,12,13,14,15},
	{16,17,18,19,20}}
		
	};
	
	
	
	for (i=0;i<2;i++){
		for (k=0;k<2;k++){
			for (j=0;j<5;j++){
	printf("values[%d][%d][%d] = %d\n",i,k,j,values[i][k][j]);
			}
		}
	}
return 0;
}