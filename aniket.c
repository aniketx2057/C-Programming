
#include<stdio.h>
int main(){
    //declearing a integer variable
    int a;
    int b;
    int c;
    float d;

    //taking input in variable a
    printf("Enter First Value:");
    scanf("%d",&a);

    printf("Enter Second Value:");
    scanf("%d",&b);

    printf("Enter Third Value ; ");
    scanf("%d",&c);

    d=(a+b+c)/3;

    printf("Average :");
    printf("%f",d);
}

