#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1 = "I like";
	string str2 = "string class";
	string str3 = str1 + str2;
	string str5("good morning");

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str5 << endl;

	cout << str3.at(5) << endl;			//5��° �ε��� ���
	cout << str3.front() << endl;		//�� ù��
	cout << str3.back()<< endl;			//�� ����
	cout << str3.size() << endl;		//���� ����(���ڿ� ũ��)��� 18+NULL
	cout << str3.capacity() << endl;	//31	//���������� ��ü�� �޸𸮿� �Ҵ��                                         ũ�� (�޸� ���� ũ��)


	str1 += str2;

	if (str1 == str3)
		cout << "���� ���ڿ�" << endl;
	else
		cout << "�ٸ� ���ڿ�" << endl;

	string str4;
	cout << "���ڿ� �Է�:";
	cin >> str3;
	cout << "�Է��� ���ڿ�:" << str3 << endl;

	return 0;
}
