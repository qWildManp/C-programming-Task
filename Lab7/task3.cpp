#include <stdio.h>

int main() {
    int ns[50],n,i,c;
    int number,max;
    for(number=0;;number++){
        printf("Please input positive number end with -1 :");
        scanf("%d",&ns[number]);
        if(ns[number]==-1){
            break;
        }
    }
    for(n=0;n<number-1;n++){
        for(i=0;i<number-n-1;i++){
           if(ns[i]>ns[i+1]){
               max=ns[i];
               ns[i]=ns[i+1];
               ns[i+1]=max;
           }
        }
    }
    for(c=0;c<number;c++){
    printf("The right order is %d  ",ns[c]);
    }


    return 0;
}