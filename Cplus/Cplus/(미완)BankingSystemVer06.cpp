//������ ������ Account Ŭ������ ����ϴ�  ��Ŭ������ �߰��� ����
//NormalAccount ���� ���ݰ���
//HighCreditAccount  �ſ�ŷڰ���

#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

//������ ���
//���α׷� ������� ���� �޴�

//�ſ���

//������ ����

class Account
{
private:
	int ID;
	int Money;
	char* Name;

public:
	Account(int id, int money, char* name);
	//���°��� �Լ�
	//�Ա� �Լ�
	//����Լ�
	//��ü����Լ�
	~Account();

};
Account::Account(int id, int money, char* name) : ID(id), Money(money)
{
	Name = new char[strlen(name) + 1];
	strcpy(Name, name);
}
Account::~Account()
{
	delete[]Name;
}

class NormalAccount : public Account
{

};

class HighCreditAccount :public NormalAccount
{

};

void Menu()
{
	int option;
	int option2;
	cout << "------��Menu------" << endl;
	cout << "1.���°���" << endl;
	cout << "2.�Ա�" << endl;
	cout << "3.���" << endl;
	cout << "4.�������� ��ü ���" << endl;
	cout << "5.���α׷� ����" << endl;

	cout << "���� : ";
	cin >> option;

	if (option == 1)
	{
		cout << "[���� ���� ����]" << endl;
		cout << "1.���� ���ݰ���" << endl;
		cout << "2. �ſ� �ŷڰ���" << endl;
		cout << "���� : ";
		cin >> option2;
		if (option2 == 1)
		{

		}
		else if (option2 == 2)
		{

		}
		else
		{
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
		}
	}
}

int main(void)
{

}