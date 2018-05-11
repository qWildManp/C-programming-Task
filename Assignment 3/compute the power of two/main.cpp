#include<stdio.h>
#include"task3lib.h"    //Power2 library
/*input n1,n2,n3 and output the sum of (2^n1+2^n2+2^n3)*/
int main(){
    int n1,n2,n3,ans;
    printf("Plz input n1,n2,n3 power of 2 :");
    scanf("%d%d%d",&n1,&n2,&n3);  //get n1,n2,n3
    ans=Power2(n1)+Power2(n2)+Power2(n3);  //compute answer
    printf("The answer is %d\n",ans);
    return 0;
}