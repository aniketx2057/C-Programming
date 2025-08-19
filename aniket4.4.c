#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);


    if (n % 3 == 0 && n % 7 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }

    return 0;
}
