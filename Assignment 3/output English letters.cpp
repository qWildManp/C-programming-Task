#include <stdio.h>
#include <string.h>
/*Input a string ,only output all the English characters you have input*/
int main (){
    char inputs[50];
    int i,num,len;
    num=0;

    printf ("Plz input a string : ");
    scanf ("%s", inputs);              //get input
    len=strlen(inputs);                //get string length
    for (i = 0; i <= len ; i++){       //for loop to scan the string and output the English characters
        if (inputs[i] >= 'A' && inputs[i] <= 'Z' || inputs[i] >= 'a'&& inputs[i] <= 'z'){
            printf ("%c", inputs[i]);
            num++;                     //count the number of English characters
        }
        else if(i== len && num== 0 ){  //if there is no English characters
            printf("There is no English characters.\n");
        }
    }
    return 0;
}

