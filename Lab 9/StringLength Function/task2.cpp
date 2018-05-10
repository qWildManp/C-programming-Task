#include<stdio.h>
#include"Task2Lib.h"
int main(){
	int n;
	char words[50];
	printf("Please input string: ");
	scanf("%s",&words);//get string
	n=stringLength(words);//get return value from stringLength
	printf("String Length is %d\n",n);//output result
	return 0;
}