#include <iostream>
using namespace std;

namespace BestComImp1				//���� �Լ� �ٸ� �̸� ������ ����
{
	void SimpleFunc(void)
	{
		cout << "BestCom�� ������ �Լ� " << endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		cout << "ProgCom�� ������ �Լ�" << endl;
	}
}

int main(void)
{
	BestComImp1::SimpleFunc();				//���� �Լ����� �ٸ� ������ ���ǵǾ����� �� ȣ���ϴ� ��
	ProgComImp1::SimpleFunc();
	return 0;
}