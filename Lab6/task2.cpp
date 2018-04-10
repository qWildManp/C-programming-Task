#include<stdio.h>
int main(){
	int n,i,t;
	for(n=1;n<8;n++){
		if(n%2!=0){
		    for(i=1;i<=8-n;i++)
				printf("*");
		}
		else{
			for(t=1;t<=8-n;t++){
			printf("=");
		}
	}
    printf("\n");
}
}