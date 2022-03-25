//스택 불기(stack unwinding)
//예외 처리되지 않아서 함수 호출한 영역을 ㅗ에외데이턱 ㅏ전달되는 현상

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
		cout << "예외코드: " << expn << endl;
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
