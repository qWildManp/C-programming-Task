#include<stdio.h>
/* print *******
         ******#
         *****##
         ****###
         ***####
         **#####
         *######
 */
int main(){
	int n,i,j;
	for(n=0;n<=7;n++){          //print 7 lines
		for(i=0;i<7-n;i++){     //each line print 7-n "*"
			printf("*");
			}
		if(n>0&&n<7){
			for(j=0;n>j;j++){   //if line length < 7,then print "#" behind the "*"
				printf("#");}
		}
	    
		printf("\n");
		}
		
}
