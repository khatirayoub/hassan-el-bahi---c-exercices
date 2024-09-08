#include<stdio.h>
int main(){
    float A,B,C,D,E;
    printf("this program calculate the sum and the average of 5 of your notes ! \n");
    printf("enter 5 of your notes : ");
    scanf("%f%f%f%f%f",&A,&B,&C,&D,&E);
    float sum = A+B+C+D+E;
    float average = sum/5;
    printf("the sum is : %.2f\n",sum);
    printf("the average is : %.2f",average);
}