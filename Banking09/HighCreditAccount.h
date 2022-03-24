#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"
#include "String.h"

class HighCreditAccount : public NormalAccount
{
private:
	int specialRate;
public:
	HighCreditAccount(int id, int money, char* name, int rate, int special) :NormalAccount(id, money, name, rate), specialRate(special)
	{}
	virtual void Deposit(int money)
	{
		NormalAccount::Deposit(money);		//���ݰ� �����߰�
		Account::Deposit(money* (specialRate/100.0))		//Ư������ �߰�
	}
};
#endif // !__HIGHCREDIT_ACCOUNT_H__
