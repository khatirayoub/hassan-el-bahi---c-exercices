#include<stdio.h>
#include<math.h>
int main(){
    float rayon;
    const float p = 3.14;
    printf("this program calculate the volume of a ball ! \n");
    printf("enter the rayon of this ball : ");
    scanf("%f",&rayon);
    float volume = 4*p*pow(rayon,3)/3;
    printf("the volume of this ball is : %.2f",volume);
}