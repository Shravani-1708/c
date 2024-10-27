#include<stdio.h>
void main () {
	char ch1,ch2;
	printf("Enter character:\n");
	scanf("%c %c",&ch1,&ch2);
	if (ch1==ch2) {
		printf("ch1= %c    ch2= %c\n",ch1,ch2);
	}
	else {
		if (ch1>ch2) {
			printf("Difference= %d\n",ch1-ch2);
		}
		else {
			printf("Difference= %d\n",ch2-ch1);
		}

	}
}

