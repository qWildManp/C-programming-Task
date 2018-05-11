#include <stdio.h>
/*Input a string ,only output all the English characters you have input*/
int main (){
    int nums[7]={3,10,15,30,55,77},inNum,i,k,j;
    printf("Plz input an integer: ");
    scanf("%d",&inNum);        //get input integer
    for(i=0;i<6;i++){          //for loop to compare the input number with the number in the array
        if(inNum<=nums[i]){    //find the input number is smaller or equal to one of the numbers in the array
            for(k=6;k>i;k--) { // loop to make a new place for the input number
                nums[k] = nums[k - 1];
            }
            break;
        }
    }
    nums[i]=inNum;  //let the input number put into the right position in the array
    printf("The new array is : ");
    for(j=0;j<7;j++){ //output the new array
        printf("%d ",nums[j]);
    }
}