#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("Введите ваши оценки(Через пробел):");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 5 && b == 5 && c == 5) {
		printf("Результат: Вы отличник!\n");
	}
	else if (a == 2 || b == 2 || c == 2) {
		printf("Результат: Не сдал!\n");
	}
	else if (a == -1 || b == -1 || c == -1) {
		printf("Результат: Не сдал!\n");
	}
	else if (a == 3 || b == 3 || c == 3) {
		printf("Результат: Вы троечник!\n");
	}
	else if (a == 4 || b == 4 || c == 4) {
		printf("Результат: Вы хорошист!\n");
	}
	system("pause");
	return 0;
}