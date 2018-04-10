#include<stdio.h>
  int main(){
	  int a,sum;
	  a=1;
	  sum=0;
	  while(a<=100){
		  sum=sum+a;
		  a=a+2;
	  }
	  printf("%d",sum);
	  return 0;
}