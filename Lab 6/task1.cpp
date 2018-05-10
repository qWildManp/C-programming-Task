#include<stdio.h>
	int main(){
		int n,i;
		for(n=1;n<8;n++){
			for (i=1;i<=8-n;i++){
				printf("*");}
			printf("\n");}
}