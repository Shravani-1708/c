#include<stdio.h>
void main() {
	int a,b,c;
	printf("Enter sides :\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (a*a + b*b))) {
		printf("Given input is a PYTHAGOREAN TRIPLET\n");
	}
	else {
		printf("Given input is not a PYTHAGOREAN TRIPLET\n");

	}
}
