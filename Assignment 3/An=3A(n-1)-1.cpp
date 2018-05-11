#include <stdio.h>
int findNum(int);
int main(){
    int n=16,ans;
    ans=findNum(n);
    printf("The a16 is %d",ans);
    return 0;
}
int findNum(int n){
    if(n==1){
        return 2;
    }
    else{
        return (3*findNum(n-1))+2;
    }
}