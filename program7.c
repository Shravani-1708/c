//checking no. is <10 or >10
#include <stdio.h>
void main() {
	int var;
	printf("enter a no.: \n");
	scanf("%d",&var);
	if(var>10)
	{
		printf("%d is greater than 10. \n",var);
	}
	else
	{

		printf("%d is less than 10. \n",var);
	}
}

