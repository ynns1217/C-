//#include <iostream>
//#include <cstring>
//#include""
//using namespace std;
//
//class Handle
//{
//private:
//	Product* pobj[100];
//	int pobNum;
//public:
//	void ShowMenu(void) const
//	{
//		cout << "++++++++POS++++++++++" << endl << endl;
//		cout << "1. ��ǰ�߰�" << endl;
//		cout << "2. ��ǰ ��ȸ" << endl;
//		cout << "3. �� ��" << endl;
//	}
//
//	void PlusPro(void)
//	{
//		int option;
//		cout << "�߰��� ��ǰ ����" << endl << endl;
//		cout << "1. Book" << endl;
//		cout << "2. CD" << endl;
//		cout << "3. Cellphone" << endl;
//		cout << "����:";
//		cin >> option;
//
//		if (option == 1)
//			cout << "1. Book" << endl;
//		//å�߰��Լ�
//		else if (option == 2)
//			cout << "2. CD" << endl;
//		//CD�߰� �Լ�
//		else if (option == 3)
//			cout << "3. Cellphone" << endl;
//		//��ȣ �߰��Լ�
//		else
//			cout << "�߸��� �����Դϴ�." << endl;
//	}
//	void PlusBook(void)
//	{
//		string title;
//		string writer;
//		string publisher;
//
//		cout << "Title : "; cin >> title;
//		cout << "Writer : "; cin >> writer;
//		cout << "Publisher : "; cin >> publisher;
//		cout << endl;
//
//		//accArr[accNum++] = new NormalAccount(id, money, name, interRate);
//	}
//	void PlusCD(void)
//	{
//		string title;
//		string siger;
//
//		cout << "Title : "; cin >> title;
//		cout << "Siger : "; cin >> siger;;
//		cout << endl;
//
//		//accArr[accNum++] = new NormalAccount(id, money, name, interRate);
//	}
//	void PlusCellphone(void)
//	{
//		string name;
//		int phonenum;
//
//		cout << "PhoneNum : "; cin >> phonenum;
//		cout << "Name : "; cin >> name;
//		cout << endl;
//
//		//accArr[accNum++] = new NormalAccount(id, money, name, interRate);
//	}
//
//};