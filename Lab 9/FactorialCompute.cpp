#include<stdio.h>
int Fac(int num);
int main(){
	int number,ans=0;
	printf("Please input a positive number to compute Factogrial: ");
	scanf("%d",&number);//get input number
	ans=Fac(number);//get return value of Fac
	printf("Answer is : %d\n",ans);
	return 0;
}

int Fac(int num){//function to compute factogrial
	int result=1;
	for(;num>=1;num--){
		result=result*num;
	}
	return result;
}