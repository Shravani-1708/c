#include<stdio.h>
void main() {
	int a,b,c;
	printf("Enter angles:\n");
 	scanf("%d %d %d",&a,&b,&c);
       int sum=a+b+c;
	if (sum==180) {
		printf("The triangle with angles %d, %d & %d is valid.\n",a,b,c);
	}
	else {
		printf("The triangle with angles %d, %d & %d is invalid.\n",a,b,c);
	}
}

