#include <stdio.h>
/* print:
   #*#*#*#*#*
   #*#*#*#*
   #*#*#*
   #*#*
   #*
   #           */
int main() {
    int i,j;
    for(i=1;i<=6;i++){     /*print 6 line*/
        for(j=1;j<=6-i;j++){ /*each line print "#*" */
            printf("#*");
            }
        if(i==6){/*if line is equals to 6*/
            printf("#");
        }
        printf("\n");
}
    return 0;
}