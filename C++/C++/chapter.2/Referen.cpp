//�������� ����
//�����ڶ� ���� �̸��� �Ǵٸ� ����
//������ �޸� ������ �ٿ��� �̸�, ���̻��� �̸��� �ο��Ѵٸ� 

#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1;
	cout << "VAL : " << num1 << endl;				//1020
	cout << "REF: " << num2 << endl;			//1020

	num2 = 3047;
	cout << "VAL : "<<num1 << endl;				//3047
	cout << "REF: " << num2 << endl;			//3047
		
	cout << "VAL: " << &num1 << endl;			//num1�� �ּҰ�
	cout << "REF: " << &num2 << endl;			//num2�� �ּҰ�
	return 0;
}