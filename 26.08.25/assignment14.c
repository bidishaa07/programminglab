/*WAP IN C TO FIND THE ROOTS OF A QUADRATIC EQUATION*/
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,r1,r2,ip,rp;
    printf("Enter the coeffecient 'a': ");
    scanf("%f",&a);
    printf("\n Enter the coeffecient 'b': ");
    scanf("%f",&b);
    printf("\n Enter the coeffecient 'c': ");
    scanf("%f",&c);

    d= b*b - (4*a*c);
    if(d>0)
    {
        r1= (-b + sqrt(d))/2*a ;
        r2= (-b - sqrt(d))/2*a ;
        printf("Two distinct real roots : \n");
        printf("%f , %f",r1,r2);
    }
    else if(d==0)
    {
        r1= -b/2*a;
        printf("Single real root : \n");
        printf("%f",r1);
    }
    else
    {
        rp= -b/2*a;
        ip = sqrt(-d)/2*a;
        printf("Two distinct complex roots : \n");
        printf("%.2f+%.2fi, %.2f-%.2fi",rp,ip,rp,ip);
    }
return 0;
}
