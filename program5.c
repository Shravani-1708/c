//finding no. divisible by 5 and 11
#include<stdio.h>
void main() {
	int n;
	printf("Enter a no.: \n");
	scanf("%d",&n);
	if (n%5==0 && n%11==0)
	{
		
		printf("%d is divisible by 5 and 11\n",n);
	}
	else
	{

		printf("%d is not dibisible by 5 and 11\n",n);
	}
}
