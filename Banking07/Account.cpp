#include<iostream>
#include <cstring>
#include "Account.h"
using namespace  std;

Account::Account(int id, int money, char* name): ID(id),Money(money)				//������
{
	Name = new char[strlen(name) + 1];
	strcpy(Name, name);
}

Account::Account(const Account &ref):ID(ref.ID),Money(ref.Money)				//���� ������
{
	Name = new char[strlen(ref.Name) + 1];
	strcpy(Name, ref.Name);
}

int Account::GetAccID() const { return ID; }						//ID ��ȯ

void Account::Deposit(int money) { Money += money; }				//�Ա�

int Account::Withdraw(int money) { Money -= money; return money; }				//���

void Account :: ShowAccInfo() const							//���� ���
{
	cout << "���� : " << ID << endl;
	cout << " �ݾ� : " << Money << endl;
	cout << "�̸� :" << Name << endl;
}

Account::~Account()
{
	delete[]Name;
}