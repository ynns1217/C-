#include "Account.h"
#include "BankingCommonDecl.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "String.h"
#include "AccountHandler.h"


void AccountHandler::ShowMenu(void)const
{
	cout << "-------Menu------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void AccountHandler::MakeCreditAccount(void)
{
	int option;
	cout << "[계좌종류선택]" << endl;
	cout << "1. 보통예금 계좌";
	cout << "2. 신용신뢰 계좌";
	cout << "선택:";
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

	cout << "[보ㅗㅇ예금 계좌 개설]" << endl;
	cout << "ID"; cin >> id;
	cout << "Name"; cin >> name;
	cout << "Money"; cin >> money;
	cout << "이자율:"; cin >> interRate;
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

	cout << "[신용신뢰 계좌 개설]" << endl;
	cout << "ID"; cin >> id;
	cout << "Name"; cin >> name;
	cout << "Money"; cin >> money;
	cout << "이자율:"; cin >> interRate;
	cout << "신용등급 (1toA, 2toB, 3toC):"; cin >> creditLevel;
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
	cout << "입금 " << endl;
	cout << "ID"; cin >> id;
	cout << "Money "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}
	}

	cout << "유효하지 않은 아이디입니다." << endl << endl;
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
			cout << "잔액부족" << endl << endl;
			return;
		}
		cout << "출금완료" << endl << endl;
		return;
	}
	cout << "유효하지 않은 아이디입니다." << endl << endl;
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