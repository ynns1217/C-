#include <iostream>
using namespace std;

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace BestComImp1
{
	void PrettyFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)
{
	cout << "BestCom�� ������ �Լ�" << endl;
	PrettyFunc();					//���� �̸�����
	ProgComImp1::SimpleFunc();		//�ٸ� �̸� ����
}

void BestComImp1::PrettyFunc(void)
{
	cout <<"So Pretty!!" << endl;
}

void ProgComImp1::SimpleFunc(void)
{
	cout << "ProgCom�� ������ �Լ�" << endl;
}