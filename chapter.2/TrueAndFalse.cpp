//�����͸� ���� ������ ������ �ȵ�����
//������ ���� ������ ������ �����ϴ�


//���α׷��� ����ȴ� -> ���α׷��� �޸𸮿� �ö�Դ�


#include <iostream>
//#define TRUE	1			//-1�� 0�� �ƴϱ⶧���� ������ ����
//#define FALSE	0
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true : " << true << endl;
	cout << "false: " << false << endl;

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
		{
			break;
		}
		cout << endl;

		cout << "sizeof 1 : " << sizeof(1) << endl;					//���� ũ���� 4 ���
		cout << "sizeof 0 :" << sizeof(0) << endl;
		cout << "sizeof true : " << sizeof(true) << endl;			//bool ũ���� 1 ���
		cout << "sizeof false :" << sizeof(false) << endl;

		return 0;
	}

}