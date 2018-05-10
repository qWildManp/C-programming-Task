#include<stdio.h>
int main(){
	char n[50];
	int i=0;
	 printf("Please input your string: ");
	 scanf("%s",&n);
	 while(n[i]!='\0') i++;      //scan the string and count the characters until string end with '\0'
	printf("The number is %d",i);
}