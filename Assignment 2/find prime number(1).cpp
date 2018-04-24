#include <stdio.h>

int main() {
    int number,i,n;
    n=0;
    printf("Please input a number:");
    scanf("%d",&number);           /*Input a  number*/
    if(number<=1){       /*If number is no more than 1*/
        printf("It's neither a prime number nor have format.");
    }
    else{                /*If number id greater than 1*/
        for(i=2;i<number;i++){
            if(number%i==0){ /*if the input number have format n++*/
            n++;
            printf("It is not a prime number.");
            break;
            }
        }
        if(n==0){/*if the input number don't have format except itself and 1,the n remains 0 */
            printf("It's a prime number.");
        }
    }
    return 0;
}