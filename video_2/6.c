#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float a,b,c;
    printf("this program calculate second grade equations ! \n");
    printf("enter the first number a : ");
    scanf("%f",&a);
    printf("enter the second number b : ");
    scanf("%f",&b);
    printf("enter the third number c : ");
    scanf("%f",&c);
    double delta = pow(b,2)-4*a*c;
    double squareRoot = sqrt(delta);
    if (delta<0)
    {
        printf("this equation don't have any solutions ! ");
    }
    else if (delta==0)
    {
        
        printf("the only solution is : %.2lf",-b/(2*a));
    }
    else{
        printf("the first solution is : %.2lf\n",(-b-squareRoot)/(2*a));
        printf("the second solution is : %.2lf",(-b+squareRoot)/(2*a));
    }
}