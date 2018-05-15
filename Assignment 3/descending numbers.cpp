#include <stdio.h>
int sortNum(int num[],int n);     //function to descend numbers
int main(){
    int a[20],i,j;
    printf("Plz input numbers (end with -1) :");
    for(i=0;i<20;i++){         //for loop to get the numbers
        scanf("%d",&a[i]);
        if(a[i]==-1){
            break;
        }
    }
    sortNum(a,i);
    printf("The result is :");
    for(j=0;j<i;j++){        //output the ordered number
        printf("%d ",a[j]);
    }
}
 int sortNum(int num[],int n){   //intfunction to descend numbers
    int i,k,temp;
    for(i=0;i<n;i++){         //loop to descend numbers
        for(k=0;k<n-i-1;k++){
            if(num[k]<num[k+1]){ //exchange the position between two numbers
                temp=num[k+1];
                num[k+1]=num[k];
                num[k]=temp;
            }
        }
    }
    return 0;
}