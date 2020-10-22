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
	printf("������� ���������� ��������� � �����:\n ");
	while (scanf_s("%d", &size) != 1)
		printf("������� �� �����, ������� ������");
	if (size > NMAX)
		printf("����� ������ ����� ������ �����������");
	printf("������� ��������:\n");
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