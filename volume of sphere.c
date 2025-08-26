
#include <stdio.h>

int main() {
    float radius, volume;
    float pi = 3.14159;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4 * pi * radius * radius * radius) / 3;

    printf("The volume of sphere is %.6f\n", volume);

    return 0;
}
