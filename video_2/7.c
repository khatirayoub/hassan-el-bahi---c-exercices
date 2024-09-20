#include<stdio.h>
#include<string.h>

int main(){
    char sex;
    int age;
    printf(" this program tells you if you should pay taxes !\n");
    printf("please enter your sex by typing m for masculin and f for feminine : ");
    scanf("%c",&sex);
    printf("please enter your age : ");
    scanf("%d",&age);
    switch (sex)
        {
        case 'm':
            if (age>=20)
            {
                printf("Mister, you should pay taxes !");
            }else if(age>0) {
                printf("Boy, you should not pay taxes !");
            }
            break;
        case 'M':
            if (age>=20)
            {
                printf("Mister, you should pay taxes !");
            }else if(age>0) {
                printf("Boy, you should not pay taxes !");
            }
            break;
        case 'f':
            if (age<=35 && age>=18)
            {
                printf("Miss, you should pay taxes !");
            }else if (age>0)
            {
                printf("Girl, you should not pay taxes !");
            }
            break;
        case 'F':
            if (age<=35 && age>=18)
            {
                printf("Miss, you should pay taxes !");
            }else if (age>0)
            {
                printf("Girl, you should not pay taxes !");
            }
            break;    
            default:
            break;
        }
}