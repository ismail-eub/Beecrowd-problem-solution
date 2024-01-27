#include <stdio.h>

int main() {
    double A, B;
    double weighted_average;


    scanf("%lf", &A);
    scanf("%lf", &B);


    weighted_average = (A * 3.5 + B * 7.5) / (3.5 + 7.5);


    printf("MEDIA = %.5lf\n", weighted_average);

    return 0;
}
