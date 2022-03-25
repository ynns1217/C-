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
//		cout << "1. 상품추가" << endl;
//		cout << "2. 상품 조회" << endl;
//		cout << "3. 종 료" << endl;
//	}
//
//	void PlusPro(void)
//	{
//		int option;
//		cout << "추가할 상품 선택" << endl << endl;
//		cout << "1. Book" << endl;
//		cout << "2. CD" << endl;
//		cout << "3. Cellphone" << endl;
//		cout << "선택:";
//		cin >> option;
//
//		if (option == 1)
//			cout << "1. Book" << endl;
//		//책추가함수
//		else if (option == 2)
//			cout << "2. CD" << endl;
//		//CD추가 함수
//		else if (option == 3)
//			cout << "3. Cellphone" << endl;
//		//번호 추가함수
//		else
//			cout << "잘못된 선택입니다." << endl;
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