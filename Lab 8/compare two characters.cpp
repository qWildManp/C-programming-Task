#include <iostream>
int compareASCIICode(char one,char two);
int main() {
    char getInput[2],a,b;
    int s,i;
    printf("Please input two characters(Warning: space is also a character): ");
    for(i=0;i<2;i++){      /*get two characters and store them in an array*/
        scanf("%c",&getInput[i]);
    }
    a=getInput[0];
    b=getInput[1];
    s=compareASCIICode(a,b);
    switch (s){          /*check the value of s*/
        case 1:{printf("%c is bigger than %c",a,b);break;}
        case 0:{printf("%c is equals %c",a,b);break;}
        case -1:{printf("%c is smaller tha %c",a,b);break;}
    }
    return 0;
}

int compareASCIICode(char one,char two){/*function to compare two characters*/
    int s;
    if(one>two){   /*if one greater than two*/
        s=1;
    }
    else if(one==two){  /*if one equals two*/
        s=0;
    }
    else{ /*if one smaller than two*/
        s=-1;
    }
    return s;
}