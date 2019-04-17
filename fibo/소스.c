#include <stdio.h>

int main(void)
{
	int num, result, cnt = 0, val1 = 0, val2 = 1;
	printf("3이상의 정수 입력 : ");
	scanf_s("%d", &num);

	while (num < 3)
	{
		printf("3이상의 정수 입력 : ");
		scanf_s("%d", &num);
	}

	while (cnt != num)
	{
		result = val2;
		val2 += val1;
		val1 = result;
		cnt++;
	}
	printf("%d\n", result);
	return 0;
}