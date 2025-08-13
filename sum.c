#include <stdio.h>
int main(){
    float a,b;
    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    float sum = a + b;
    printf ("sum = %d", sum);
    return 0;
}