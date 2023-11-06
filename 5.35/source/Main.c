#include<stdio.h>

int fibonacci(int);

int main()
{
	int n;

	printf("請輸入要計算的項數：");
	scanf("%d", &n);

	printf("0 ");

	for (int x = 0; x < n-1; x++)
	{
		printf("%d ", fibonacci(x));
	}

	return 0;
}
int fibonacci(int y)
{
	if (y <= 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(y - 1) + fibonacci(y - 2);
	}
}