//HighCreditAccount 클래스의 선언과 정의
#ifdef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	int specialRate;
public:
	HighCreditAccount(int id, int money, char* name, int rate, int special) :NormalAccount(id, money, name, rate), specialRate(special)
	{}
	virtual void Deposit(int money)
	{
		NormalAccount::Deposit(money);									//원금과 이자추가
		Account::Deposit(money * (special / 100.0));				//이자 추가
};
#endif // __HIGHCREDIT_ACCOUNT_H__
