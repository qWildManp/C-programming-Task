#include<stdio.h>
int main(){
	int i;
	char n;
	i=0;
	while((n=getchar())!='\n')
	{
		
		if(n=='a'){
			i++;  
		}
	}
	printf("%d\n",i);
}

