#include<stdio.h>

void TowerOfHanoi(int, char, char, char);

int main()
{
	int n;

	printf("Enter the number of disks¡G");
	scanf("%d", &n);

	TowerOfHanoi(n, 'a', 'b', 'c');

	return 0;
}
void TowerOfHanoi(int x, char begin, char auxiliary, char target)
{
	if (x == 1)
	{
		printf("Move disk 1 form %c to %c\n", begin, target);
		return;
	}

	TowerOfHanoi(x - 1, begin, target, auxiliary);

	printf("Move disk %d from %c to %c\n", x, begin, target);

	TowerOfHanoi(x - 1, auxiliary, begin, target);
}