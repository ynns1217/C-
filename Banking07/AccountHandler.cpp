#include "BankingCommonDecl.h"
#include "Account.h"
#include"AccountHandler.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include <iostream>
using namespace std;

void AccountHandler::ShowMenu(void)const
{
	cout << "-------Menu------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void AccountHandler::MakeCreditAccount(void)
{
	int option;
	cout << "[������������]" << endl;
	cout << "1. ���뿹�� ����";
	cout << "2. �ſ�ŷ� ����";
	cout << "����:";
	cin >> option;

	if (option == 1)
		MakeNormalAccount();
	else
		MakeCreditAccount();
	
}

void AccountHandler::MakeNormalAccount(void)
{
	int ID;
	char Name[20];
	int Money;
	int InterRate;


}