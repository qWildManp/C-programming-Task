#include<stdio.h>
  int main(){
	  char GPA;
	  printf("Input you rank(A,B,C,D or a,b,c,d)\n");
	  scanf("%c",&GPA);
	  switch(GPA){
	  case 'A'|'a':{
				 printf("Your GPA is 4.00\n"); 
				 break;
			 }
	 
	  case 'B'|'b':{
				 printf("Your GPA is 3.00\n");
				 break;			 
			 }
			 
	  case 'C'|'c':{
				 printf("Your GPA is 2.00\n");
			     break;
			 }
	  case 'D'|'d':{
			     printf("Your GPA is 1.00\n");
			   }
	  case 'F'|'f':{
			     printf("Your GPA is 0.00\n");
				 break;
			   }

	  default:{
			     printf("Unvalid\n ");
			  }
	  }
	  return 0;

}