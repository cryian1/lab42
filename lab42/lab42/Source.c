#include <stdio.h>
#include <Windows.h>

void main()
{
	int a, b, min, max;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("¬ведите первое = ");
	scanf_s("%d", &a);
	printf("¬ведите второе число = ");
	scanf_s("%d", &b);
	if (a < b) {
		min = a;
		max = b;
	}
	else {
		min = b;
		max = a;
	}
	printf("большее число = %d\n", max);
	printf("меньшее число = %d\n", min);
}