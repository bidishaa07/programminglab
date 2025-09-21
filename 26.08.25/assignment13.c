#include <stdio.h>
int main(){
    float l, b, p, a;
    printf("Enter the length of rectangle : ");
    scanf("%f",&l);
    printf("\n Enter the breadth of rectangle : ");
    scanf("%f",&b);
    p = 2*(l+b);
    a = l*b;
    printf("\n The perimeter of rectangle = %.2f",p);  
    printf("\n The area of rectangle = %.2f",a);
    return 0;
}
