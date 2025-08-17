#include <stdio.h>
int main(){
    float a,b;
    printf("enter first number: ");
    scanf("%f", &a);

    printf("enter second number: ");
    scanf("%f", &b);

    float diff = a - b;
    printf ("difference = %f", diff);
    return 0;
}