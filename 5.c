

#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        bill = units * 2;
    }
    else if (units <= 300) {
        bill = (200 * 2) + (units - 200) * 4;
    }
    else if (units <= 400) {
        bill = (200 * 2) + (100 * 4) + (units - 300) * 5;
    }
    else {
        bill = (200 * 2) + (100 * 4) + (100 * 5) + (units - 400) * 7;
    }

    printf("Total Bill = Rs %.2f\n", bill);

    return 0;
}
