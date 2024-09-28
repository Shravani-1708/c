// printing product of 1st 10 nos
#include<stdio.h>
void main () {
	int product=1;
	for (int i=1;i<=10;i++) {
		product=i*product;
	}
	printf("PRODUCT= %d\n",product);
}
