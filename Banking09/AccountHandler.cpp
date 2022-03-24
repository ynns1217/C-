#include "Account.h"
#include "BankingCommonDecl.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "String.h"
#include "AccountHandler.h"


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
	int id;
	String name;
	int money;
	int interRate;

	cout << "[���Ǥ����� ���� ����]" << endl;
	cout << "ID"; cin >> id;
	cout << "Name"; cin >> name;
	cout << "Money"; cin >> money;
	cout << "������:"; cin >> interRate;
	cout << endl;

	accArr[accNum++] = new NormalAccount(id, money, name, interRate);
}

void AccountHandler::MakeCreditAccount(void)
{
	int id;
	String name;
	int money;
	int interRate;
	int creditLevel;

	cout << "[�ſ�ŷ� ���� ����]" << endl;
	cout << "ID"; cin >> id;
	cout << "Name"; cin >> name;
	cout << "Money"; cin >> money;
	cout << "������:"; cin >> interRate;
	cout << "�ſ��� (1toA, 2toB, 3toC):"; cin >> creditLevel;
	cout << endl;

	switch (creditLevel)
	{
	case 1:
		accArr[accNum++] = new HighCreditAccount(id, money, name, interRate, LEVEL_A);
		break;
	case 2:
		accArr[accNum++] = new HighCreditAccount(id, money, name, interRate, LEVEL_B);
		break;
	case 3:
		accArr[accNum++] = new HighCreditAccount(id, money, name, interRate, LEVEL_C);
		break;

	}
	
}

void AccountHandler::DepositMoney(void)
{
	int money;
	int id;
	cout << "�Ա� " << endl;
	cout << "ID"; cin >> id;
	cout << "Money "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}

	cout << "��ȿ���� ���� ���̵��Դϴ�." << endl << endl;
}

void AccountHandler::WithdrawMoney(void)
{
	int money;
	int id;
	cout << "ID"; cin >> id;
	cout << "Money "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Withdraw(money);
			cout << "�ܾ׺���" << endl << endl;
			return;
		}
		cout << "��ݿϷ�" << endl << endl;
		return;
	}
	cout << "��ȿ���� ���� ���̵��Դϴ�." << endl << endl;
}

AccountHandler::AccountHandler() : accNum(0) {}
void AccountHandler::ShowAllAccInfo(void)const
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}

AccountHandler::~AccountHandler()
{
	for (int i = 0; i < accNum; i++)
		delete accArr[i];
}