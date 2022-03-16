#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;
typedef struct Account
{
	int ID;
	char Name[20] = { 0 };
	int Janack;
}Account;

enum {GAESUL =1, IBGEUM, CHULGEUM, ALLMONEY, EXIT};

Account accArr[100];
int accNum = 0;

void gaesul()
{
	int id;
	char name[20] = { 0 };
	int janack;
	cout << "======개설======" << endl;
	cout << "개설할 ID를 입력하시오 : ";
	cin >> id;
	cout << "개설자의 성함을 입력하시오 :";
	cin >> name;
	cout << "처음 입금액을 입력하시오 :";
	cin >> janack;

	cout << endl;

	accArr[accNum].ID = id;
	strcpy(accArr[accNum].Name, name);
	accArr[accNum].Janack = janack;
	accNum++;
}

void ibgeum()
{
	int money;
	int id;
	cout << "======입금======" << endl;
	cout << "입금할 금액을 입력하시오: " << endl;
	cin >> money;
	cout << "입금할 계좌를 입력하시오 : "<<endl;
	cin >> id;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].ID == id)
			accArr[i].Janack += money;
		else
			cout << "입력하신 계좌번호가 없습니다." << endl;
	}

}

void chulgeum()
{
	int money;
	int id;
	cout << "======출금======" << endl;
	cout << "출금할 금액을 입력하시오: ";
	cin >> money;
	cout << "출금할 계좌를 입력하시오 : ";
	cin >> id;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].ID == id)
			accArr[i].Janack -= money;
		else
			cout << "입력하신 계좌번호가 없습니다." << endl;
	}
}

void junjae_print()
{
	cout << "=====전체 계좌번호 출력=======" << endl;
	for (int i = 0; i < accNum; i++)
	{
		cout <<"===" << i+1 << "번째 정보===" << endl;
		cout << "이름 : " << accArr[i].Name << endl;
		cout << "계좌번호 :" << accArr[i].ID << endl;
		cout << "잔액 : " << accArr[i].Janack << endl;		
	}
	system("pause");
}

int main(void)
{
	int option;
	while (1)
	{
		system("cls");
		cout << "1.계좌 개설" << endl << "2.입금" << endl << "3.출금" << endl << "4.계좌정보 전체 출력" << endl << "5.프로그램 종료" << endl;
		cin >> option;
		if (option == 1)
		{
			gaesul();
		}
		else if (option == 2)
		{
			ibgeum();
		}
		else if (option == 3)
		{
			chulgeum();
		}
		else if (option == 4)
		{
			junjae_print();
		}
		else if (option == 5)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else
		{
			cout << "잘못 입력하였습니다." << endl;
			break;
		}
	}
	return 0;
}
