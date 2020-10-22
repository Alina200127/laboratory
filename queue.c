#define NMAX 100

struct stack
{
	char str[NMAX];
	int top;
};

//������������� �����//������ ��������, ������������ � ������� �����, ����� 0.
void init(struct stack* stk)
{
	stk->top = 0;
}
//��������� �������� � ����
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
		printf("���� �����, ���������� ���������: %d !\n", stk->top);
		return 1;
	}
}
//�������� �������� �� �����
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
		printf("���� ����!\n");
		return 0;
	}
}
//��������� �������� �������� ����� ��� ��� ��������
char stkTop(struct stack* stk) {
	if ((stk->top) > 0) {
		return stk->str[stk->top - 1];
	}
	else {
		printf("���� ����!\n");
		return 0;
	}
}
//��������� ���������� ��������� �����
int getcount(struct stack* stk)
{
	return stk->top;
}
//�����������, ���� �� ����
int isempty(struct stack* stk)
{
	if (stk->top == 0)
		return 1;
	else
		return 0;
}
//����� ��������� �����
void stkPrint(struct stack* stk)
{
	int i;
	i = stk->top; // i - ���������� ��������� � �����
	if (isempty(stk) == 1) return; // ���� ����
	do {
		i--;
		printf("%c\n", stk->str[i]);
	} while (i > 0);
}