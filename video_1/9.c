#include<stdio.h>
#include<string.h>

float in_parallel(int R1,int R2,int R3);
float in_series(int R1,int R2,int R3);
// float relation(char related,int R1,int R2,int R3){
//     switch (related) 
//     {
//     case 'p':
//         return in_parallel(R1,R2,R3);
//         break;
//     case 's':
//         return in_series(R1,R2,R3);
//         break;
//     default:
//         printf("enter s or p !");
//         break;
//     }
// }

float in_series(int R1,int R2,int R3){
    return R1+R2+R3;
}

float in_parallel(int R1,int R2,int R3){
    float c = (1/(float)R1)+(1/(float)R2)+(1/(float)R3);
    printf("%f",c);
    return 1/c;
}



int main(){
    int R1,R2,R3;
    char related;
    printf("this programme calculates the equivalent of 3 resistancs\n");
    
    printf("if the resistances were in series write s and if it was in parallel write p ! ");
    scanf("%c",&related);

    printf("enter the first resistance value : ");
    scanf("%d",&R1);
    
    printf("enter the second resistance value : ");
    scanf("%d",&R2);
    
    printf("enter the third resistance value : ");
    scanf("%d",&R3);
        switch (related) 
    {
    case 'p':
        printf("\nthe result is p : %.2f", in_parallel(R1,R2,R3));
        break;
    case 's':
         printf("\nthe result is s : %.2f",in_series(R1,R2,R3));
        break;
    default:
        printf("enter s or p !");
        break;
    }
    int h;
    scanf("%d",&h);



}