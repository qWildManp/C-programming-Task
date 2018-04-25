#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    char word[50];
    char end[]="End";
    printf("Please input a string end with a word \"End\":\n");
    do{
        scanf("%s",&word);
        n=strcmp(word,end);
        if(n==0){
            break;
        }
        else{
            count++;
        }
    }while(word!="End");
    printf("There is %d words\n",count);
    return 0;
}