#include<stdio.h>
char* stringCopy(char*dest,char*res);
int main()
{
    char str1[20], str2[20];
    scanf("%s", str1);
    stringCopy(str2, str1);
    printf("%s\n", str2);
    return 0;
}
char *stringCopy(char*dest,char*res){  //copy string function
	while(*res!='\0'){ //loop to copy each char form res string to dest string
		*(dest++)=*(res++);
	}
	*dest='\0';  //add a '\0' to complete the dest string
	return 0;
}