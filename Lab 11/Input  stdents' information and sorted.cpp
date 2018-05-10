#include<stdio.h>
#include<string.h>
struct studentInfor{       //struct to collect student information
    char name[10],major[3];
    float score;
};

int main(){
    struct studentInfor student[50],temp;
    char stop[]="end";
    int i,j,k;
    for(i=0;i<50;i++){      //loop to limit the student information table
        printf("\nPlz input a student name(\"end\" to stop): ");
        scanf("%s",student[i].name);
        if(strcmp(stop,student[i].name)==0){break;}  //if input "end" break the loop
        else{
            printf("\nPlz input a student score : ");
            scanf("%f",&student[i].score);
            printf("\nPlz input a student major : ");
            scanf("%s",student[i].major);
        }
    }
    for(k=0;k<i;k++){ //loop to ascend the student information
        for(j=0;j<i-k-1;j++) {  //exchange the value
            if (strcmp(student[j].name, student[j + 1].name) > 0) {
                temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
            }
        }
    }
    printf("Student's Name:         Score:          major:");
    for(j=0;j<i;j++){
        printf("\n%s                 %.2f               %s\n",student[j].name,student[j].score,student[j].major);
    }
    return 0;
}