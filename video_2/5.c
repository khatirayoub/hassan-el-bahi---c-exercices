#include<stdio.h>
float average(float mark1,float mark2,float mark3){
    return (mark1+mark2+mark3)/3;
}


int main(){
    float result;
    float mark1,mark2,mark3;
    printf("this program calculates your average and gives the note according to it.\n");
    printf("enter the first mark : ");
    scanf("%f",&mark1);
    printf("enter the second mark : ");
    scanf("%f",&mark2);
    printf("enter the third mark : ");
    scanf("%f",&mark3);
    result=average(mark1,mark2,mark3);
    printf("the average is : %.2f\n",result);
    if (result<10 && result>=0)
    {
        printf("insuffisant");
    }else if (result>=10 && result<12)
    {
        printf("good");
    }else if (result>=12 && result<14)
    {
        printf("nice");
    }else if (result>=14 && result<=20)
    {
        printf("excellent");
    }else{
        printf("please enter marks between 0 and 20");
    }

}