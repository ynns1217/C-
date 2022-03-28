/*
C++평가
이름: 하연서
2022.03.28
*/

#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

//프로그램 사용자의 선택 메뉴
enum { PLUS = 1, ALL, Bye, EXIT };

class Product                   //상품 클래스
{
private:
    int Idx;                    //총 개수
    int Price;                  //상품 가격
    string Description;         //상품 종류
public:
    Product(int idx, int price, string description) :Idx(idx), Price(price)             //생성자와 초기화
    {
        Description = description;
    }


    virtual void getProduct() const                         //getProduct() 멤버함수 오버라이딩
    {
        cout << "Idx : " << Idx << endl;
        cout << "Price : " << Price << endl;
        cout << "Description : " << Description << endl;
    }
};

class Book :public Product                                  //Book클래스 생성 상속
{
private:
    string Title;
    string Writer;
    string Publisher;

public:
    Book(int idx, int price, string description, string title, string writer, string publisher) : Product(idx, price, description)              //생성자
    {
        Title = title;
        Writer = writer;
        Publisher = publisher;
    }

    virtual void getProduct() const                 //Product 클래스 getProduct 오버라이딩
    {
        cout << "+++++++++Book+++++++++++" << endl;
        Product::getProduct();
        cout << "Title : " << Title << endl;
        cout << "Writer : " << Writer << endl;
        cout << "Publisher : " << Publisher << endl;
    }
};
class CD :public Product                //CD 클래스 생성 후 Product 클래스 상속
{
private:
    string Title;
    string Singer;

public:
    CD(int idx, int price, string description, string title, string singer) : Product(idx, price, description)      //생성자로 초기화
    {
        Title = title;
        Singer = singer;
    }
    virtual void getProduct() const         //Product 클래스 getProduct 오버라이딩
    {
        cout << "+++++++++CD+++++++++++" << endl;
        Product::getProduct();
        cout << "Title : " << Title << endl;
        cout << "Singer : " << Singer << endl;
    }
};

class Cellphone :public Product         //Cellphone클래스 생성후 상속
{
private:
    string Model;

public:
    Cellphone(int idx, int price, string description, string model) : Product(idx, price, description)      //생성자
    {
        Model = model;
    }

    virtual void getProduct() const             //Product 클래스 getProduct 오버라이딩
    {
        cout << "++++++++++Cellphone++++++++++" << endl;
        Product::getProduct();
        cout << "Model : " << Model << endl;
    }

};
class Handle
{
private:
    vector<int> prod_list;                     //vector로 자동 동적할당

    static int idx;                         //static idx변수 선언
    Product* pobj[100];                     //모든 상품 동적할당할 배열
public:
    Handle() {}

    void ShowMenu(void) const               //메뉴
    {
        cout << "++++++++POS++++++++++" << endl << endl;
        cout << "1. 상품 추가" << endl;
        cout << "2. 상품 조회" << endl;
        cout << "3. 상품 삭제" << endl;
        cout << "4. 종 료" << endl;
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
            PlusBook();                             //Book추가 함수
        }

        else if(option == 2)
        {
            cout << "2. CD" << endl;
            PlusCD();                               //CD 추가 함수
        }

        else if(option == 3)
        {
            cout << "3. Cellphone" << endl;
            pluscellphone();                        //cellphone 추가 함수
        }

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

        cout << "Idx : " << idx << endl;
        cout << "Title : "; cin >> title;
        cout << "Writer : "; cin >> writer;
        cout << "Publisher : "; cin >> publisher;
        cout << "Price : "; cin >> price;
        cout << "Description : "; cin >> description;
        cout << endl;

        pobj[idx] = new Book(idx, price, description, title, writer, publisher);                //동적할당
        prod_list.push_back(idx);                                                               //벡터에 추가
        idx++;
    }

    void PlusCD(void)
    {
        int price;
        string description;
        string title;
        string siger;
        cout << "Idx : " << idx << endl;
        cout << "Title : "; cin >> title;
        cout << "Siger : "; cin >> siger;
        cout << "Price : "; cin >> price;
        cout << "Description : "; cin >> description;
        cout << endl;

        pobj[idx] = new CD(idx, price, description, title, siger);
        prod_list.push_back(idx);
        idx++;
    }

    void pluscellphone(void)                    //cellphone 입력받는 함수
    {
        int price;
        string description;
        string model;

        cout << "Idx : " << idx << endl;
        cout << "Model : "; cin >> model;
        cout << "Price : "; cin >> price;
        cout << "Description : "; cin >> description;
        cout << endl;

        pobj[idx] = new Cellphone(idx, price, description, model);
        prod_list.push_back(idx);
        idx++;
    }

    void Bye(void)                    
    {

        cout <<"삭제할 Idx 입력" <<endl;
        cout << "Idx : "; cin >> idx;
        cout << endl;

        for (vector<int>::iterator it = prod_list.begin(); it != prod_list.end();) {

                it = prod_list.erase(prod_list.begin() + idx);
          
        }

    }

    void ShowAll_book(void) const                  //모든 상품 출력
    {
        cout << "-------------------------" << endl;
        for (int i = 0; i < prod_list.size(); i++)
            pobj[i]->getProduct();
        cout << "-------------------------" << endl;
    }

    ~Handle()                                   //소멸자
    {
        for (int i = 0; i < idx; i++)
            delete pobj[i];
    }

};

int Handle::idx = 0;            //Handle 클래스 static 변수 초기화

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
            manager.ShowAll_book();
            break;
        case Bye:
            manager.Bye();
            break;
        case EXIT:
            return 0;
        default:
            cout << "잘못입력" << endl;
        }
    }
    return 0;
}