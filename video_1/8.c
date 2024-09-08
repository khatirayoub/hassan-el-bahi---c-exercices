#include<stdio.h>
#include<math.h>
float calc_distance(int x1,int x2,int y1,int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}





int main(){
    int x1,x2,y1,y2;
    printf("this program calculates the distance between two points ! \n");
    printf("the cordinate x of the first point is : ");
    scanf("%d",&x1);
    printf("the cordinate y of the first point is : ");
    scanf("%d",&y1);
    printf("the cordinate x of the second point is : ");
    scanf("%d",&x2);
    printf("the cordinate y of the second point is : ");
    scanf("%d",&y2);    
    float distance = calc_distance(x1,x2,y1,y2);
    printf("the distance between the two points is : %.2f",distance);
}