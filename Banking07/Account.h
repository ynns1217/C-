//Account Ŭ������ ���� �� ����



#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
private:
	int ID;
	int Money;
	char* Name;

public:
	Account(int id, int money, char* name);
	Account(const Account& ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};

#endif