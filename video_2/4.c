#include<stdio.h>
int main(){
    int age;
    printf("this program gives you the category you're in just by typing the age ! \n");
    printf("enter your age : ");
    scanf("%d",&age);
    if (age>=1 && age<=2)
    {
        printf("you're a toddler !");
    }else if (age>=3 && age<=4)
    {
        printf("you're a preschooler !");
    }else if (age>=5 && age<=12)
    {
        printf("you're a school_aged child!");
    }else{
        printf("your age is not mentioned ! ");
    }
}