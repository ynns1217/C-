#include <iostream>
using namespace std;
//Ű���� inline�� ���ؼ� �Լ��� �ζ��� �Լ����Ǿ���
inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	cout << SQUARE(5) << endl;		//�Լ� ȣ�� , �ζ����Լ��̴� ��ü�κ��� ȣ�⹮�� ��ü
	cout << SQUARE(12) << endl;
	return 0;
}