#include<stdio.h>
int main(){
    float length;
    float width;
    float surface;
    float perimeter;
    printf("this program counts the surface and the perimeter of a rectangle ! \n");
    printf("enter the length : ");
    scanf("%f",&length);
    printf("enter the width : ");
    scanf("%f",&width);
    printf("the surface of this rectangle is : %.2f\n",length*width);
    printf("the perimeter of this rectangle is : %.2f",(length+width)*2);


}
