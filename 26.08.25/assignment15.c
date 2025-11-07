/* WACP to find the ceil and floor of a postive and a negatve number */
#include <stdio.h>
#include <math.h>
int main(){
    double n1,n2;
    printf("Enter a positive number : ");
    scanf("%f",&n1);
    printf("\nfloor value : %f\n", floor(n1));
    printf("\nceil value : %f\n", ceil(n1));

    printf("Enter a negative number : ");
    scanf("%f",&n2);
    printf("\nfloor value : %f\n", floor(n2));
    printf("\nceil value : %f\n", ceil(n2));
    return 0;
}