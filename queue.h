#define NMAX 100

struct stack
{
	char str[NMAX];
	int top;
};

//инициализация стека//Индекс элемента, находящегося в вершине стека, равен 0.
void init(struct stack* stk);

//помещение элемента в стек
int push(struct stack* stk, char c);

//Удаление элемента из стека
int pop(struct stack* stk, char* str);

//Получение верхнего элемента стека без его удаления
char stkTop(struct stack* stk);

//Получение количества элементов стека
int getcount(struct stack* stk);

//Определение, пуст ли стек
int isempty(struct stack* stk);

//Вывод элементов стека
void stkPrint(struct stack* stk);