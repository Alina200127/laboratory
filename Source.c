# include <stdio.h> 
#include <malloc.h>
#include <locale.h>

void print_array(int Array[], int size)
{
	int m;
	for (m = 0; m < size; m++)
	{
		printf("%d ", Array[m]);
	}
	printf("\n");
}

void shell_sort(int Array[], int size)
{
	int i, j;
	int step = size / 2;
	int tmp;  //вспомогательна€ переменна  
	while (step > 0)  // провер€ем, если step>0 то входим в тело цикла
	{
		for (i = step; i < size; i++)
		{
			j = i;  // сохран€ем индекс и элемент
			while ((j >= 0) && (Array[j - step] > Array[j]))
			{
				tmp = Array[j];
				Array[j] = Array[j - step];
				Array[j - step] = tmp;
				j -= step;
			}
			print_array(Array, size);
		}
		step = step / 2;
	}
}

void main()
{
	int* Array, size;
	int i, j;
	setlocale(LC_ALL, "Russian");

	printf("¬ведите размер массива: ");
	while (scanf_s("%d", &size) != 1)
		printf("¬ведено не число, введите заново");
	if (size <= 0)
	{
		printf("¬ведЄн недопустимый размер массива");
		return;
	}
	Array = (int*)malloc(size * sizeof(int));
	printf("¬ведите элементы массива: ");
	for (i = 0; i < size; i++)
		while (scanf_s("%d", &Array[i]) != 1)
			printf("¬ведено не число, введите заново");

	shell_sort(Array, size);

	//вывод отсортированного массива на экран
	printf("ќтсортированный массив:");
	//for (int i = 0; i < size; i++)
		//printf("%d ", Array[i]);
	print_array(Array, size);

	free(Array);
	_getch();
}