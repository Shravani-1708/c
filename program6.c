//finding no. is even or odd
#include<stdio.h>
void main() {
	int var;
	printf("Enter a no.:\n");
	scanf("%d",&var);
	if (var%2==0)
	{
		printf("%d is an even no.\n",var);
	}
	else
	{
		printf("%d is an odd no.\n",var);
	}
}

