//���� �ұ�(stack unwinding)
//���� ó������ �ʾƼ� �Լ� ȣ���� ������ �ǿ��ܵ����� �����޵Ǵ� ����

#include< iostream>
using namespace std;

void SimpleFuncOne(void);
void SimpleFuncTwo(void);
void SimpleFuncThree(void);

int main(void)
{
	try
	{
		SimpleFuncOne();
	}
	catch (int expn)
	{
		cout << "�����ڵ�: " << expn << endl;
	}
	return 0;
}

void SimpleFuncOne(void)
{
	cout << "void SimpleFuncOne(void)" << endl;
	SimpleFuncTwo();
	cout << "void SimpleFuncOne(void) end" << endl;
}

void SimpleFuncTwo(void)
{
	cout << "void SimpleFuncTwo(void)" << endl;
	SimpleFuncThree();
	cout << "void SimpleFuncTwo(void) end" << endl;
}

void SimpleFuncThree(void)
{
	cout << "void SimpleFuncThree(void)" << endl;
	throw - 1;
	cout << "void SimpleFuncThree(void) end" << endl;
}
