#include <stdio.h>
#include <locale.h>
#include <malloc.h> 
#include <stdlib.h.>
#include "queue.h"

int main()
{
	struct stack* stk;
	int i, size;
	char str;
	setlocale(LC_ALL, "rus");
	stk = (struct stack*)malloc(sizeof(struct stack));
	init(stk);
	printf("¬ведите количество элементов в стеке:\n ");
	while (scanf_s("%d", &size) != 1)
		printf("¬ведено не число, введите заново");
	if (size > NMAX)
		printf("¬ведЄн размер стека больше допустимого");
	printf("¬ведите элементы:\n");
	for (i = -1; i < size; i++)
	{	
		scanf_s("%c", &str);
		push(stk, str);
	}
	do
	{
		pop(stk, &str);
		printf("%c", str);
		getcount(stk);
	} while (isempty(stk) == 0);
	stkPrint(stk);
	return 0;
}