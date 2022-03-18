#include<iostream>
using namespace std;

class FriutSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;


public:
	FriutSeller(int price, int num, int money)
		:APPLE_PRICE(price), numOfApples(num), myMoney(money)
	{

	}
	int SaleApples(int money)
	{

	}
	void ShowSalesResult() const
	{

	}

};

class FriutBuyer
{
private:
	int myMoney;
	int numOfApples;
public:
	FriutBuyer(int money)
		:myMoney(money), numOfApples(0)
	{

	}
	void BuyerApples(FriutSeller& seller, int money)
	{

	}
	void ShowBuyResult() const

	{

	}
};
