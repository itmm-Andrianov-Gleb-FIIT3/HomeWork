#include<stdio.h>
#include<limits.h>
#include<locale.h>
#include<malloc.h>
int main() {
	setlocale(LC_ALL, "rus");
	int* mass;
	int size;
	printf("¬ведите размер массива: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	printf("¬ведите массив: ");
	for (int i = 1; i < size - 1; i++) {
		scanf_s("%d", &mass[i]);
	}
	int loc = 0;
	for (int i = 1; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			loc++;
		}
	}
	int* locmass;
	locmass = (int*)malloc(sizeof(int) * loc);

	for (int i = 0; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			for (int loc2 = 0; loc2 < loc; loc2++) {
				locmass[loc2] = mass[i];
			}
		}
	}
	for (int i = 0; i < loc; i++) {
		printf("%d", locmass[i]);
	}
	free(locmass);
	free(mass);
	return 0;

}