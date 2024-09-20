#include<stdio.h>
#include<stdbool.h>

bool verify(int A,int B){
    return A*B>0;
}


int main(){
    int A,B;
    printf("this program verify wether two numbers have the same sign ! \n");
    printf("enter the first number : ");
    scanf("%d",&A);
    printf("enter the second number : ");
    scanf("%d",&B);
    bool x = verify(A,B);
    
    printf("%s",x?"they have the same sign":"they don't have the same sign");

}