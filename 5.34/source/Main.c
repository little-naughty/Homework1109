#include<stdio.h>
#include<math.h>

int main()
{
	int base, exponent, ans;

	printf("Enter your base¡G");
	scanf("%d", &base);

	printf("Enter your exponent¡G");
	scanf("%d", &exponent);

	ans = pow(base, exponent);

	printf("Your answer is¡G%d", ans);

	return 0;
}