#include<stdio.h>
void main () {
	int n;
	printf("Enter no. 1-5 :");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("ONE");
			break;

		case 2:
			printf("TWO");
			break;
		case 3:
			printf("THREE");
			break;
		case 4:
			printf("FOUR");
			break;
		case 5:
			printf("FIVE");
			break;
		default:
			printf("%d is greater than 5.",n);
	}
}
