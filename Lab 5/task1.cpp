#include<stdio.h>
int main(){ 
	int height, weight;
	printf("pls input your height and weight\n");
	scanf("%d%d",&height,&weight);
	if((height-105)>(weight+20)){
		printf("You are too slim\n");
	}
	else if((height-105)<=(weight+20)&&(height>weight-10)){
		printf("You are fit\n");
	}
	
	else{
		printf("You are too fat\n");
	}
	
	return 0;

}