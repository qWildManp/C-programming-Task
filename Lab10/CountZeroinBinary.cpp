#include <stdio.h>
int ZeroinBinary(int);
int main(){
	int num,result;
	printf("Plz input a positive number to compute '0' in binary: ");
	scanf("%d",&num);      //input a positive number
	result=ZeroinBinary(num);  //get the result
	printf("There are %d zeros in this number \n",result);
	return 0;
}


int ZeroinBinary(int n){  //function to count the nmber of '0'
	int count=0;
	if(n==0){
		return count;   //return the result
	}
	else if(n%2==0){
		count=1+ZeroinBinary(n/2);   //the recursion
	}
	else{
			ZeroinBinary(n/2);       //the recursion
	}
}
