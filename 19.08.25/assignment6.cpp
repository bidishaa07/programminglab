#include<stdio.h>
int main(){
	float p, r,t,si;
	printf("Enter the principal value: ");
	scanf("%f",&p);
	printf("Enter the rate of interest (in percentage): ");
	scanf("%f",&r);
	printf("Enter the time period: ");
	scanf("%f",&t);
	
	si= (p*r*t)/100;
	printf("Simple interest=  %f",si);
	return 0;
}
