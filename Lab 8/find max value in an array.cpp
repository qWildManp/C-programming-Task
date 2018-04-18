#include <stdio.h>
void findMax(float a[], int n); // function prototype
int main(){
    float value[4] = {2.5, -4.75, 1.2, 3.67};
    findMax(value, 4);
    printf("The max value is %.2f", value[0]);
    return 0;
}
void findMax(float a[], int n){   /*function to find max value in the array*/
    float temp;
    int i;
    for(i=0;i<n;i++){
        if(a[0]<a[i]){
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        }
    }
}
