#include<stdio.h>
  int main()
  {
      int a,b;
	  float a1,b1,c;
	  scanf("%d%d",&a,&b);
	  a1=(float)a;
	  b1=(float)b;
	  c=a1/b1;
	  printf("%d+%d=%d\n",a,b,a+b);
	  printf("%d-%d=%d\n",a,b,a-b);
	  printf("%d*%d=%d\n",a,b,a*b);
	  printf("%d/%d=%f\n",a,b,c);
	  printf("%d%%%d=%d",a,b,a%b);
	  return 0;

  }
