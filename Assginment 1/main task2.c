
#include <stdio.h>
    int main()
    {
        int n;                                            //input number
        scanf_s("%d", &n);
         if(n%3==0&&n%2==0){
             printf("It is the multiple of 2 and 3\n");   //judge the input is multiple of 2 and 3
         }
         else if (n % 2 == 0) {                           //judge the input is multiple of 2
            printf("It is the multiple of 2\n");
        }
         else if (n % 3 == 0 ) {                         //judge the input is multiple of 3
			printf("It is the multiple of 3");
		}
        else {
            printf("Erro\n");
        }
        return 0;
    }

