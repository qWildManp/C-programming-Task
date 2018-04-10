#include<stdio.h>
int main(){
	int n,i;
	i=0;
	for(n=1;n<1000;n++){
		if(n%5!=0&&n%3==0){
			i=i+n;
		}
	}
	printf("%d\n",i);

}