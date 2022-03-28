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
enum { PLUS = 1, ALL, EXIT };
class Product
{
private:
    int Idx;
    int Price;
    string Description;         //종류
public:
    Product(int idx, int price, string description) :Idx(idx), Price(price)
    {
        Description = description;
    }
    int ShowInfo() const
    {
        return Idx;
    }
    virtual void getProduct() const
    {
        cout << "Idx : " << Idx << endl;
        cout << "Price : " << Price << endl;
        cout << "Description : " << Description << endl;
    }
};
class Book :public Product
{
private:
    string Title;
    string Writer;
    string Publisher;
public:
    Book(int idx, int price, string description, string title, string writer, string publisher) : Product(idx, price, description)
    {
        Title = title;
        Writer = writer;
        Publisher = publisher;
    }
    virtual void getProduct() const
    {
        cout << "+++++++++Book+++++++++++" << endl;
        Product::getProduct();
        cout << "Title : " << Title << endl;
        cout << "Writer : " << Writer << endl;
        cout << "Publisher : " << Publisher << endl;
    }
};
class CD :public Product
{
private:
    string Title;
    string Singer;
public:
    CD(int idx, int price, string description, string title, string singer) : Product(idx, price, description)
    {
        Title = title;
        Singer = singer;
    }
    virtual void getProduct() const
    {
        cout << "+++++++++CD+++++++++++" << endl;
        Product::getProduct();
        cout << "Title : " << Title << endl;
        cout << "Singer : " << Singer << endl;
    }
};
class Cellphone :public Product
{
private:
    string Model;
    string Brand;
public:
    Cellphone(int idx, int price, string description, string model, string brand) : Product(idx, price, description)
    {
        Model = model;
        Brand = brand;
    }
    virtual void getProduct() const
    {
        cout << "++++++++++Cellphone++++++++++" << endl;
        Product::getProduct();
        cout << "Model : " << Model << endl;
        cout << "Brand : " << Brand << endl;
    }
};
class Handle
{
private:
    vector<int> prod_list;
    //vector<int> cd_list;
    //vector<int> cellphone_list;
    static int idx;
    Product* pobj[100];
public:
    Handle() {}
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
        else if(option == 2)
        {
            cout << "2. CD" << endl;
            PlusCD();
        }
        else if(option == 3)
        {
            cout << "3. Cellphone" << endl;
            pluscellphone();
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
        pobj[idx] = new Book(idx, price, description, title, writer, publisher);
        prod_list.push_back(idx);
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
    void pluscellphone(void)
    {
        int price;
        string description;
        string model;
        string brand;
        cout << "Idx : " << idx << endl;
        cout << "Brand : "; cin >> brand;
        cout << "Model : "; cin >> model;
        cout << "Price : "; cin >> price;
        cout << "Description : "; cin >> description;
        cout << endl;
        pobj[idx] = new Cellphone(idx, price, description, model, brand);
        prod_list.push_back(idx);
        idx++;
    }
    void ShowAll_book(void) const
    {
        cout << "-------------------------" << endl;
        for (int i = 0; i < prod_list.size(); i++)
            pobj[i]->getProduct();
        cout << "-------------------------" << endl;
    }
    //void ShowAll_cd(void) const
    //{
    //   cout << "-------------------------" << endl;
    //   for (int i = 0; i < cd_list.size(); i++)
    //      pobj[i]->getProduct();
    //   cout << "-------------------------" << endl;
    //}
    //void ShowAll_cellphone(void) const
    //{
    //   cout << "-------------------------" << endl;
    //   for (int i = 0; i < cellphone_list.size(); i++)
    //      pobj[i]->getProduct();
    //   cout << "-------------------------" << endl;
    //}
    ~Handle()
    {
        for (int i = 0; i < idx; i++)
            delete pobj[i];
    }
};
int Handle::idx = 0;
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
            //manager.ShowAll_cd();
            //manager.ShowAll_cellphone();
            break;
        case EXIT:
            return 0;
        default:
            cout << "잘못입력" << endl;
        }
    }
    return 0;
}