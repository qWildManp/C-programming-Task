#include <stdio.h>

int main() {
  int number;
  int i=1,j,c=0;
  scanf_s("%d",&number);/*get input number*/
  j=number;
  while(j > 0){    /*loop to count the digits*/
        j=j/10;
        c++;
    }
  while(i*i<number){/*loop to maximum value of square i which is approach to the number */
      i++;
  }
  if(i*i==number){   /* if the square i is equal to number it is a perfect square number*/
      printf("%d have %d digits %d is the perfect square of %d",number,c,number,i);
  }
  else{    /*if the square i is not equal to */
      printf("%d have %d digits It's not a perfect square number",number,c);
  }
}