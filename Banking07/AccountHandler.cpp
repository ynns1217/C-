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
	int ID;
	char Name[20];
	int Money;
	int InterRate;


}