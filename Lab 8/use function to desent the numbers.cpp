#include <stdio.h>
void sort(int g[],int n);
int main() {
    int number[50],i,n;
    printf("Please input numbers (-1 to stop): ");
    for(i=0;;i++){/*get input number sequence*/
        scanf("%d",&number[i]);
        if(number[i]==-1){
            break;
        }
    }
    sort(number,i);
    for(n=0;n<i;n++){ /*output the number sequence*/
    printf("%d ",number[n]);
    }

    return 0;
}
void sort(int g[],int n){ /*function to desent the number */
    int j,k,temp;
    for(j=0;j<n-1;j++){
        for(k=0;k<n-j-1;k++){
            if(g[k]<g[k+1]){
                temp=g[k];
                g[k]=g[k+1];
                g[k+1]=temp;
            }
        }
    }
}