#include<stdio.h>
int main(){
    int number,i,n;
    n=0;
    printf("Input:\n");
    scanf_s("%d",&number);
    if(number==0||number==1){
        printf("It is not neither a prime number nor have factor");
    }
    for(i=2;i<number;i++){
        if(number%i==0) {
            n++;
            printf("%d ", i);

        }
    }
    if(n==0){
        printf("It is a prime number");
        }
    return 0;
}
