#include <stdio.h>

int main(void)
{
	int dan1, dan2;
	int row = 1;
	printf("구구단의 시작 단은? (2~9) : ");
	scanf_s("%d", &dan1);

	while (dan1 < 2 || dan1 > 9)
	{
		printf("구구단의 시작 단은? (2~9) : ");
		scanf_s("%d", &dan1);
	}

	printf("구구단의 마지막 단은? (2~9) : ");
	scanf_s("%d", &dan2);

	while (dan2 < dan1 || dan2 > 9)
	{
		printf("구구단의 마지막 단은? (2~9) : ");
		scanf_s("%d", &dan2);
	}

	while (dan1 <= dan2)
	{
		while (row <= 9)
		{
			printf("%d x %d = %d\n", dan1, row, dan1*row);
			row++;
		}
		dan1++;
		row = 0;
	}

	return 0;
}