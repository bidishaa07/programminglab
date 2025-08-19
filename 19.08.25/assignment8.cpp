#include<stdio.h>
int main(){
	float c,f,c1,f1;
	printf("Enter tempreature in degree fahrenheit : ");
	scanf("%f",&f1);
	c1=((f1-32)*5)/9;
	printf("Temperature in celsius= %f",c1"\n");
	
	printf("Enter tempreature in degree celsius : ");
	scanf("%f",&c);
	f=((9/5)*c)+32;
	printf("Temperature in fahrenheit= %f",f);
	return 0;
}
