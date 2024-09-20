#include<stdio.h>
#include<stdbool.h>

bool verify(int A,int B){
    return A*B>0;
}


int main(){
    int A,B;
    printf("this program verify wether two numbers have the same sign ! \n");
    printf("enter the value of A : ");
    scanf("%d",&A);
    printf("enter the value of B : ");
    scanf("%d",&B);
    bool x = verify(A,B);
    switch (x)
    {
    case true:
        printf("they have the same sign\n");
        int C;
        C=A;
        A=B;
        B=C;
        printf("A=%d\n",A);
        printf("B=%d\n",B);
        break;
    case false:
    int produit,somme;
        printf("they don't have the same sign\n");
        produit=A*B;
        somme=A+B;
        printf("their multiplication is : %d\n",produit);
        printf("their sum is : %d",somme);
        break;
    }
}