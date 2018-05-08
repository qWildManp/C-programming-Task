#include<stdio.h>
int Fac(int,int);

int main(){
	int num,result,start=1;
	printf("Plz input a positive number to compute fac: ");
	scanf("%d",&num);  //input the number
	result=Fac(start,num);  //get the result
	printf("The result is %d \n",result);
}


int Fac(int i,int n){  //function to calculate Fac
	int result=1;
	if(i>n){
		return result;   //return the result
	}
	result=i*Fac(i+1,n);  //the recursion
}