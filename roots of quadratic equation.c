#include <stdio.h>
#include <math.h>
int main(){
int a , b , c , D;

 printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    D = b^2 - 4*a*c;

    if (D > 0){
    printf("Two Real and Distinct Roots: ");
    printf("%d",D);
    }else if (D == 0 ){
    printf("Two Real and Equal Roots: ");
    printf("%d",D);
    }else if (D < 0 ){
    printf("Roots are imaginary: ");
    printf("%d",D);
    }
    return 0;
}
