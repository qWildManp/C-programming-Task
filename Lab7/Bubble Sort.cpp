#include <stdio.h>

int main() {
    int ns[50],n,i,c;
    int number,max;
    for(number=0;;number++){     /*loop for input string*/
        printf("Please input positive number end with -1 :");
        scanf("%d",&ns[number]); /*input number string */
        if(ns[number]==-1){      /*when input='-1',jump out the loop*/
            break;
        }
    }
    for(n=0;n<number-1;n++){          /*if length is 'n',then we should scan 'n-1' times to take numbers in order*/
        for(i=0;i<number-n-1;i++){    /*compare two numbers and pick out the bigger one*/
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