#include<stdio.h>
void main () {
	int a,b,c;
	printf("Enter the nos. :\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<=b && a<=c) {
		printf("minimum no. is %d",a);
	}else if (b<=c && b<=a) {
		printf("minimum no. is %d",b);
	}else {
		printf("minimum no. is %d",c);
	}
}


