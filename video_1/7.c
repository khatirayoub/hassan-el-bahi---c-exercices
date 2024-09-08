#include<stdio.h>
int main(){
    int stime;  //time in seconds
    int hours;
    int minutes;
    int seconds;
    printf("this program converts the time in seconds into time in hours,minutes,seconds !\n");
    printf("enter the time in seconds : ");
    scanf("%d",&stime);
    hours=stime/3600;
    minutes=(stime%3600)/60;
    seconds=((stime%3600)%60);
    printf("the time is %d h and %d min and %d seconds",hours,minutes,seconds);
}