#include<stdio.h>

int LCM(int,int);

int main()
{
	int x, y;
	int ans;

	printf("Enter two numbers¡G");

	scanf("%d%d", &x, &y);

	ans = LCM(x, y);

	printf("LCM is¡G%d", ans);

	return 0;
}
int LCM(int a, int b)
{
	int max;

	max = (a > b) ? a : b;

	while (1)
	{
		if (max % a == 0 && max % b == 0)
		{
			return max;
		}
		max++;
	}
}