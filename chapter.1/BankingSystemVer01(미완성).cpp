#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;
typedef struct Account
{
	int ID;
	char Name[20] = { 0 };
	int Janack;
}Account;

enum {GAESUL =1, IBGEUM, CHULGEUM, ALLMONEY, EXIT};

Account accArr[100];
int accNum = 0;

void gaesul()
{
	int id;
	char name[20] = { 0 };
	int janack;
	cout << "======����======" << endl;
	cout << "������ ID�� �Է��Ͻÿ� : ";
	cin >> id;
	cout << "�������� ������ �Է��Ͻÿ� :";
	cin >> name;
	cout << "ó�� �Աݾ��� �Է��Ͻÿ� :";
	cin >> janack;

	cout << endl;

	accArr[accNum].ID = id;
	strcpy(accArr[accNum].Name, name);
	accArr[accNum].Janack = janack;
	accNum++;
}

void ibgeum()
{
	int money;
	int id;
	cout << "======�Ա�======" << endl;
	cout << "�Ա��� �ݾ��� �Է��Ͻÿ�: " << endl;
	cin >> money;
	cout << "�Ա��� ���¸� �Է��Ͻÿ� : "<<endl;
	cin >> id;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].ID == id)
			accArr[i].Janack += money;
		else
			cout << "�Է��Ͻ� ���¹�ȣ�� �����ϴ�." << endl;
	}

}

void chulgeum()
{
	int money;
	int id;
	cout << "======���======" << endl;
	cout << "����� �ݾ��� �Է��Ͻÿ�: ";
	cin >> money;
	cout << "����� ���¸� �Է��Ͻÿ� : ";
	cin >> id;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].ID == id)
			accArr[i].Janack -= money;
		else
			cout << "�Է��Ͻ� ���¹�ȣ�� �����ϴ�." << endl;
	}
}

void junjae_print()
{
	cout << "=====��ü ���¹�ȣ ���=======" << endl;
	for (int i = 0; i < accNum; i++)
	{
		cout <<"===" << i+1 << "��° ����===" << endl;
		cout << "�̸� : " << accArr[i].Name << endl;
		cout << "���¹�ȣ :" << accArr[i].ID << endl;
		cout << "�ܾ� : " << accArr[i].Janack << endl;		
	}
	system("pause");
}

int main(void)
{
	int option;
	while (1)
	{
		system("cls");
		cout << "1.���� ����" << endl << "2.�Ա�" << endl << "3.���" << endl << "4.�������� ��ü ���" << endl << "5.���α׷� ����" << endl;
		cin >> option;
		if (option == 1)
		{
			gaesul();
		}
		else if (option == 2)
		{
			ibgeum();
		}
		else if (option == 3)
		{
			chulgeum();
		}
		else if (option == 4)
		{
			junjae_print();
		}
		else if (option == 5)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else
		{
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
			break;
		}
	}
	return 0;
}
