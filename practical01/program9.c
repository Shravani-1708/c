#include<stdio.h>
void main() {
	int n;
	int count=0;
	printf("Enter a no.=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		if (n%i ==0) {
			printf("%d\n",i);
			count = count+1;
		}
	}
	printf("no. of divisors= %d\n",count);
}










