#include<stdio.h>
int fileCopy(char *destFileName, char *resFileName);
int main()
{
    char str1[20], str2[20];
    int flag;
    scanf("%s", str1); // read name of file (.txt) to be copied
    scanf("%s", str2); // read name of file (.txt) to copy to
    flag = fileCopy(str2, str1);
    if (flag == 1) 
      printf("Success\n");
    else 
      printf ("Failure\n");
    return 0;
}
int fileCopy(char *destFileName, char *resFileName){
	char c;
	FILE *dest,*res;
	dest = fopen (destFileName,"r+");
	res = fopen (resFileName,"r");
	if(res==NULL){   // if cannot find the resFile
		return 0;
	}
	else{  //resFile can be found
		if(dest==NULL){   //  if cannot find the destFile
			dest = fopen (destFileName,"w");
		}
		while((c=fgetc(res))!=EOF){  //loop to get  each char from resFile and copy to the destFile
		fputc(c,dest);
		}
		//close two files
		fclose(res);
		fclose(dest);
		return 1;
	}
}
