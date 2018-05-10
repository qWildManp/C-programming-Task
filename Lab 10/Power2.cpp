#include<stdio.h>
int Power2(int);
int main(){
	int power,result;
	printf("Plz input a positive number to exponent of 2: "); 
	scanf("%d",&power);           //input the power number
	result=Power2(power);         //get the result    
	printf("2 to the power %d is %d\n",power,result);
	return 0;
}

int Power2(int n){     //function to calculate power of 2
	int result=1;
	if(n==0){
		return result;
	}
	else{return result=2*Power2(n-1); }  //The recrusion
}