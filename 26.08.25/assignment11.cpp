#include <stdio.h>
int main(){
	int n,ch, l;
	printf("Enter an integer: ");
	scanf("%d",&n);
	printf("Enter 1 to find last digit using % operator");
	printf("Enter 2 to find last digit using % operator");
	printf("Enter choice");
	scanf("%d",&ch);
	if(ch==1){
		l= n%10;
		printf("Last digit %d\n",l);
	}
	else{
		l= n-(n/10)*10;
		printf("Last digit %d\n",l);
	}
	return 0;
}