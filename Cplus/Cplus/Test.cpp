#include <iostream>
#include <cstring>
using namespace std;

//프로그램 사용자의 선택 메뉴
enum { PLUS = 1, ALL, EXIT };

//상품의 종류
enum { BOOK = 1, CD = 2 ,CELLPHONE =3};

class Product
{
private:
	int Price;
	string Description;			//종류
	
public:
	Product(int price, string description) :Price(price)
	{
		Description = description;
	}

	void ShowAll() const
	{
		cout << "Price : " << Price << endl;
		cout << "Description : " << Description << endl;
	}

	int getProduct() const
	{
		return Price;
	}
	
};

class Book :public Product
{
private:
	string Title;
	string Writer;
	string Publisher;

public:
	Book(int price, string description, string title, string writer, string publisher) : Product(price, description)
	{
		Title = title;
		Writer = writer;
		Publisher = publisher;
	}

	void ShowAllBook() const
	{
		cout << "Title : " << Title << endl;
		cout << "Writer : " << Writer << endl;
		cout << "Publisher : " << Publisher << endl;
	}
};
//class CD :public Product
//{
//private:
//	string Title;
//	string Siger;
//
//};
//class Cellphone :public Product
//{
//private:
//	int PhoneNum;
//	string Name;
//};

class Handle
{
private:
	Product* pobj[100];
	int pobNum;

public:
	Handle() : pobNum(0) {}
	void ShowMenu(void) const
	{
		cout << "++++++++POS++++++++++" << endl << endl;
		cout << "1. 상품추가" << endl;
		cout << "2. 상품 조회" << endl;
		cout << "3. 종 료" << endl;
	}

	void PlusPro(void)
	{
		int option;
		cout << "추가할 상품 선택" << endl << endl;
		cout << "1. Book" << endl;
		cout << "2. CD" << endl;
		cout << "3. Cellphone" << endl;
		cout << "선택:";
		cin >> option;

		if (option == 1)
		{
			cout << "1. Book" << endl;
			PlusBook();
		}
		else if (option == 2)
			cout << "2. CD" << endl;
			//CD추가 함수
		else if (option == 3)
			cout << "3. Cellphone" << endl;
			//번호 추가함수
		else
			cout << "잘못된 선택입니다." << endl;
	}
	void PlusBook(void)
	{
		int price;
		string description;
		string title;
		string writer;
		string publisher;

		cout << "Title : "; cin >> title;
		cout << "Writer : "; cin >> writer;
		cout << "Publisher : "; cin >> publisher;
		cout << "Price : "; cin >> price;
		cout << "Description : "; cin >> description;
		cout << endl;

		pobj[pobNum++] = new Book( price, description, title,  writer, publisher);
	}


	void ShowAll(void) const
	{
		for (int i = 0; i < pobNum; i++)
		{
			cout << "-------------------------" << endl;
			pobj[i]->ShowAll();
			cout << "-------------------------" << endl;
			cout << endl;
		}
	}

	~Handle()
	{
		for (int i = 0; i < pobNum; i++)
			delete pobj[i];
	}
	//void PlusCD(void)
	//{
	//	string title;
	//	string siger;

	//	cout << "Title : "; cin >> title;
	//	cout << "Siger : "; cin >> siger;;
	//	cout << endl;

	//	//accArr[accNum++] = new NormalAccount(id, money, name, interRate);
	//}
	//void PlusCellphone(void)
	//{
	//	string name;
	//	int phonenum;

	//	cout << "PhoneNum : "; cin >> phonenum;
	//	cout << "Name : "; cin >> name;
	//	cout << endl;

	//	//accArr[accNum++] = new NormalAccount(id, money, name, interRate);
	//}

};


int main(void)
{
	// static 멤버변수 idx,vector 컨테이너 사용

	Handle manager;
	int choice;

	while (1)
	{
		manager.ShowMenu();
		cout << "선택:";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case PLUS:
			manager.PlusPro();
			break;
		case ALL:
			manager.ShowAll();
			break;
		case EXIT:
			return 0;
		default:
			cout << "잘못입력" << endl;
		}
	}
	return 0;
}