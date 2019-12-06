#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double Pi = 3.14;
    float radius;
    printf("Enter your radius: ");
    scanf("%f", &radius);

    float area = Pi * pow(radius, 2);

    printf("Result is: %f\n", area);

    return 0;
}