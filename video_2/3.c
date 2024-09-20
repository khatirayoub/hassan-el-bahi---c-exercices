#include<stdio.h>


float bill(int number){
    if (number<=10 && number>0)
    {
        return number*0.30;
    }else if (number>10 && number<=30 )
    {
        return 10*0.30+(number-10)*0.25;
    }else if (number>30)
    {
        return 10*0.30+20*0.25+(number-30)*0.20;
    }
}

int main(){
    int number;
    float result;
    printf("this program gives you the amount of money you should pay ! \n");
    printf("enter the number of copies you want : ");
    scanf("%d",&number);
    result=bill(number);
    printf("the bill is : %.2f",result);

}