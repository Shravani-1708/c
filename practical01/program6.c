#include<stdio.h>
void main() {
	int num;
	float sum=0;
	float avg;
	printf("enter 10 nos :\n");
	for (int i=1;i<=10;i++) {
		scanf("%d",&num);

		sum=sum+num;
	}
	avg=sum/10;
	printf("SUM= %f\n",sum);
	printf("AVERAGE= %f\n",avg);
}

