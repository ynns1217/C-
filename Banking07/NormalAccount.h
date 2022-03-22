//NormalAccount 클래스의 선언과 정의

#ifdef __NORMAL_ACCOUNT_H__
#define __NORMAL__ACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account
{
private:
	int interRate				//이자율 &eksdnl
public:
	NormalAccount(int id, int money, char* name, int rate) :Account(id, money, name), interRate(rate)
	{}
	virtual void Deposit(int money);			//원금 추가
	Account::Deposit(money* (interRate / 100.0));			//이자 추가
};

#endif
