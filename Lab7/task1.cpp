#include<stdio.h>
int main(){
	int n,i,j;
	for(n=0;n<=7;n++){
		for(i=1;i<8-n;i++){
			printf("*");
			}
		if(n>0&&n<7){
			for(j=0;n>j;j++){
				printf("#");}
		}
	    
		printf("\n");
		}
		
}
