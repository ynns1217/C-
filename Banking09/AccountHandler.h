//AcountHandler Ŭ������ ����� ����
#ifndef __ACCOUNT_HANDLER_H__
#define _-ACCOUNT_HANDLER_H__

#include "Account.h"
using namespace std;

class AccountHandler
{
private:
	Account* accArr[100];
	int accNum;

public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAcocunt(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();

protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
};

#endif