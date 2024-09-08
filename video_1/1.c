#include<stdio.h>
int main(){
    int birth;
    int age;
    printf("this program helps you count your age ! \n");
    printf("please enter the year of your birth : ");
    scanf("%d",&birth);
    age=2024-birth;
    printf("your age is : %d",age);
}