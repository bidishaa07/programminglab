#include <stdio.h>
int main(){
    float a,b;
    printf("enter first number: ");
    scanf("%f", &a);

    printf("enter second number: ");
    scanf("%f", &b);

    float sum = a + b;
    printf ("sum = %f", sum);
    return 0;
}