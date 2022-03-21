//이전에 정의한 Account 클래스르 상속하는  두클래스를 추가로 정의
//NormalAccount 보통 에금계좌
//HighCreditAccount  신용신뢰계좌

#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

//열거형 상수
//프로그램 사용자의 선택 메뉴

//신용등급

//계자의 종류

class Account
{
private:
	int ID;
	int Money;
	char* Name;

public:
	Account(int id, int money, char* name);
	//계좌개설 함수
	//입금 함수
	//출금함수
	//전체출력함수
	~Account();

};
Account::Account(int id, int money, char* name) : ID(id), Money(money)
{
	Name = new char[strlen(name) + 1];
	strcpy(Name, name);
}
Account::~Account()
{
	delete[]Name;
}

class NormalAccount : public Account
{

};

class HighCreditAccount :public NormalAccount
{

};

void Menu()
{
	int option;
	int option2;
	cout << "------ㅡMenu------" << endl;
	cout << "1.계좌개설" << endl;
	cout << "2.입금" << endl;
	cout << "3.출금" << endl;
	cout << "4.계좌정보 전체 출력" << endl;
	cout << "5.프로그램 종료" << endl;

	cout << "선택 : ";
	cin >> option;

	if (option == 1)
	{
		cout << "[계좌 종류 선택]" << endl;
		cout << "1.보통 예금계좌" << endl;
		cout << "2. 신용 신뢰계좌" << endl;
		cout << "선택 : ";
		cin >> option2;
		if (option2 == 1)
		{

		}
		else if (option2 == 2)
		{

		}
		else
		{
			cout << "잘못 입력하였습니다." << endl;
		}
	}
}

int main(void)
{

}