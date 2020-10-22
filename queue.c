#define NMAX 100

struct stack
{
	char str[NMAX];
	int top;
};

//инициализация стека//Индекс элемента, находящегося в вершине стека, равен 0.
void init(struct stack* stk)
{
	stk->top = 0;
}
//помещение элемента в стек
int push(struct stack* stk, char c)
{
	if (stk->top < NMAX)
	{
		stk->str[stk->top] = c;
		stk->top++;
		return 0;
	}
	else
	{
		printf("Стек полон, количество элементов: %d !\n", stk->top);
		return 1;
	}
}
//Удаление элемента из стека
int pop(struct stack* stk, char* str)
{
	//char str;
	if ((stk->top) > 0)
	{
		stk->top--;
		*str = stk->str[stk->top];
		return 1;
	}
	else
	{
		printf("Стек пуст!\n");
		return 0;
	}
}
//Получение верхнего элемента стека без его удаления
char stkTop(struct stack* stk) {
	if ((stk->top) > 0) {
		return stk->str[stk->top - 1];
	}
	else {
		printf("Стек пуст!\n");
		return 0;
	}
}
//Получение количества элементов стека
int getcount(struct stack* stk)
{
	return stk->top;
}
//Определение, пуст ли стек
int isempty(struct stack* stk)
{
	if (stk->top == 0)
		return 1;
	else
		return 0;
}
//Вывод элементов стека
void stkPrint(struct stack* stk)
{
	int i;
	i = stk->top; // i - количество элементов в стеке
	if (isempty(stk) == 1) return; // стек пуст
	do {
		i--;
		printf("%c\n", stk->str[i]);
	} while (i > 0);
}