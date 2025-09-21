#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, ci;
    printf("Enter the principle amount : ");
    scanf("%f", &p);
    printf("\n Enter the rate of interest : ");
    scanf("%f", &r);
    printf("\n Enter the time period : ");
    scanf("%f", &t);
    ci = p * (pow((1.0 + r/100.0), t)) - p;  // Correct pow() usage with two arguments
    printf("\n The compound interest is : %.2f\n", ci);
    return 0;
}