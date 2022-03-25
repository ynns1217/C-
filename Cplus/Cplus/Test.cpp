#include <iostream>
#include <cstring>
using namespace std;

//���α׷� ������� ���� �޴�
enum { PLUS = 1, ALL, EXIT };

//��ǰ�� ����
enum { BOOK = 1, CD = 2 ,CELLPHONE =3};

class Product
{
private:
	int Price;
	string Description;			//����
	
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
		cout << "1. ��ǰ�߰�" << endl;
		cout << "2. ��ǰ ��ȸ" << endl;
		cout << "3. �� ��" << endl;
	}

	void PlusPro(void)
	{
		int option;
		cout << "�߰��� ��ǰ ����" << endl << endl;
		cout << "1. Book" << endl;
		cout << "2. CD" << endl;
		cout << "3. Cellphone" << endl;
		cout << "����:";
		cin >> option;

		if (option == 1)
		{
			cout << "1. Book" << endl;
			PlusBook();
		}
		else if (option == 2)
			cout << "2. CD" << endl;
			//CD�߰� �Լ�
		else if (option == 3)
			cout << "3. Cellphone" << endl;
			//��ȣ �߰��Լ�
		else
			cout << "�߸��� �����Դϴ�." << endl;
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
	// static ������� idx,vector �����̳� ���

	Handle manager;
	int choice;

	while (1)
	{
		manager.ShowMenu();
		cout << "����:";
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
			cout << "�߸��Է�" << endl;
		}
	}
	return 0;
}