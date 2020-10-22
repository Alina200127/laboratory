#define NMAX 100

struct stack
{
	char str[NMAX];
	int top;
};

//������������� �����//������ ��������, ������������ � ������� �����, ����� 0.
void init(struct stack* stk);

//��������� �������� � ����
int push(struct stack* stk, char c);

//�������� �������� �� �����
int pop(struct stack* stk, char* str);

//��������� �������� �������� ����� ��� ��� ��������
char stkTop(struct stack* stk);

//��������� ���������� ��������� �����
int getcount(struct stack* stk);

//�����������, ���� �� ����
int isempty(struct stack* stk);

//����� ��������� �����
void stkPrint(struct stack* stk);