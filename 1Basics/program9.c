// peinting sum of 1st 10 odd nos
#include<stdio.h>
void main() {
	int sum =0;
	for(int i=1;i<=10;i++) {
		if(i%2 != 0) {
			sum=sum+i;
		}
	}
	printf("SUM= %d\n",sum);
}
