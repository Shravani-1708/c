#include<stdio.h>
void main() {
	int num;
	char chr;
	float rs;
	double crMoney;
	printf("Enter a no. :\n");
	scanf("%d",&num);
	printf("Enter a character :\n");
	scanf(" %c",&chr);
	printf("Enter a rupees :\n");
	scanf("%f",&rs);
	printf("Enter a crMoney :\n");
	scanf("%lf",&crMoney);


	printf("num =%d \n",num);
	printf("Size of num :%ld \n",sizeof(num));

	printf("chr =%c \n",chr);
	printf("Size of chr :%ld \n",sizeof(chr));
	
	printf("rs =%f \n",rs);
	printf("Size of rs :%ld \n",sizeof(rs));

	printf("crMoney =%lf \n",crMoney);
	printf("Size of crMoney :%ld \n",sizeof(crMoney));
}
	
