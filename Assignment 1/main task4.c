#include <stdio.h>
int main() {
    char n;
    scanf_s("%c",&n);
    if(n<='Z'&&n>='A'||n<='z'&&n>='a'){         //judge  input is  an English letter
        printf("English letter");
    }
    else if(n<='9'&&n>='0'){                    //judge input is a digit
        printf("digit");
    }
    else{                                       //judge input is other characters
        printf("other characters");
    }
    return 0;
}