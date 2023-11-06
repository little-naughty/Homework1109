#include<stdio.h>

char ALPHBET(int);

int main()
{
	printf("Enter one alphbet¡G");

	char alphbet;

	scanf("%c", &alphbet);

	alphbet = ALPHBET(alphbet);

	printf("%c", alphbet);

	return 0;
}
char ALPHBET(int x)
{
	if (x >= 65 && x <= 90)
	{
		return x + 32;
	}
	else if (x >= 91 && x <= 122)
	{
		return x - 32;
	}
}