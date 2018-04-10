#include <stdio.h>
int main() {
    int i = 5;
    char ch;
    scanf_s("%c", &ch);
    printf("%d is the ASCII code of '%c'\n", ch,  ch);
    printf("the value of i is %d\n", i);
    i = ch;
    printf("the value of i is %d\n", i);
    return 0;
}

//1.line 10 missing the ";"
//2. float f is never used; Local var j is assigned but never used; line 5 the var ch hasn't been initiated