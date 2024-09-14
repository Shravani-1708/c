//check char is in uppercase or in lowercase
#include<stdio.h>
void main() {
	char var;
	printf("Enter a character: \n");
	scanf("%c",&var);

	if (var>='A' && var<='Z')
	{
		printf("You entered UPPERCASE character.\n");
	}
	if (var>='a' && var<='z')
	{
			
		printf("You entered LOWERCASE character.\n");
	}
}
