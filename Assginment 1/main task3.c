#include<stdio.h>
int main()
{
    int n;
    scanf_s("%d", &n);
    if (n <= 999) {                //input is smaller than 999
        while (n != 0) {           //the function to reverse the input
            printf("%d", n % 10);
            n = n / 10;
        }
    }
    else {
        printf("Too Big");         //input is bigger than 999
    }
    return 0;
}