#include<stdio.h>
#include<limits.h>
#include<locale.h>
#include<malloc.h>
#include<windows.h>

int loc_min(int* massiv, int k1)
{
	int localmin = massiv[0];
	int q = 1;

	while (q < k1)
	{
		if (localmin > massiv[q])
		{
			localmin = massiv[q];
			q++;

		}
	}
	printf("–езультат: минимальный из %d локальных минимумов [ ", k1);
	for (int g = 0; g < k1; g++)
	{
		printf("%d ", massiv[g]);

	}
	printf("] равен %d", localmin);
	free(massiv);
}

int local(int* mass, int size, int loc)
{
	int k = 0;
	while (k != size)
	{
		printf("%d", mass[k]); //проверка как передалс¤ массив
		k++;
	}
	int* massiv;
	massiv = (int*)malloc(sizeof(int) * loc);
	printf("\n");
	int k1 = 0;
	for (int i = 1; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			massiv[k1] = mass[i];
			k1++;
		}
	}
	for (int g = 0; g < k1; g++)
	{
		printf("%d ", massiv[g]);
	}
	printf("\n");
	loc_min(massiv, k1);


}

int mass()
{
	int* mass;
	int size;
	printf("¬ведите размер массива: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	printf("¬ведите массив: ");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &mass[i]);
	}
	printf("\n");
	for (int g = 0; g < size; g++)
	{
		printf("%d ", mass[g]);
	}
	int loc = 0; //счетчик локальных максимумов
	for (int i = 1; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			loc++;
		}
	}
	printf("\n");
	printf("%d", loc);
	printf("\n");
	local(mass, size, loc);


}

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	mass();
	return 0;
}