#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int x;
    int y;
    int z;
    printf("this program calculate x power y ! \n");
    printf("enter x value : ");
    scanf("%d",&x);
    printf("enter y value : ");
    scanf("%d",&y);
    int result = pow(x,y);
    printf("the result is : %d",result);
    scanf("%d",&z);
}