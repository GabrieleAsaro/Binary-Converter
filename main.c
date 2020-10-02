#include <stdio.h>

int main()
{
	char str[] = "mrugen";
	int len = 0;

	while(str[len] != '\0')
	{
		len++;
	}
	printf("The length of string is %d\n", len);

	for (int i = 0; i < (len) / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;	
	}

	printf("Reversed string: %s\n", str);

	return 0;
}
