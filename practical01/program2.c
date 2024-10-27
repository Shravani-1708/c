#include<stdio.h>
void main () {
	int a,b,c;
	printf("Enter the nos. :\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c) {
		printf("max no. is %d",a);
	}else if (b>=c && b>=a) {
		printf("max no. is %d",b);
	}else {
		printf("max no. is %d",c);
	}
}


