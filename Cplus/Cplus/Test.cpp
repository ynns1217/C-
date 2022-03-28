/*
C++��
�̸�: �Ͽ���
2022.03.28
*/

#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

//���α׷� ������� ���� �޴�
enum { PLUS = 1, ALL, Bye, EXIT };

class Product                   //��ǰ Ŭ����
{
private:
    int Idx;                    //�� ����
    int Price;                  //��ǰ ����
    string Description;         //��ǰ ����
public:
    Product(int idx, int price, string description) :Idx(idx), Price(price)             //�����ڿ� �ʱ�ȭ
    {
        Description = description;
    }


    virtual void getProduct() const                         //getProduct() ����Լ� �������̵�
    {
        cout << "Idx : " << Idx << endl;
        cout << "Price : " << Price << endl;
        cout << "Description : " << Description << endl;
    }
};

class Book :public Product                                  //BookŬ���� ���� ���
{
private:
    string Title;
    string Writer;
    string Publisher;

public:
    Book(int idx, int price, string description, string title, string writer, string publisher) : Product(idx, price, description)              //������
    {
        Title = title;
        Writer = writer;
        Publisher = publisher;
    }

    virtual void getProduct() const                 //Product Ŭ���� getProduct �������̵�
    {
        cout << "+++++++++Book+++++++++++" << endl;
        Product::getProduct();
        cout << "Title : " << Title << endl;
        cout << "Writer : " << Writer << endl;
        cout << "Publisher : " << Publisher << endl;
    }
};
class CD :public Product                //CD Ŭ���� ���� �� Product Ŭ���� ���
{
private:
    string Title;
    string Singer;

public:
    CD(int idx, int price, string description, string title, string singer) : Product(idx, price, description)      //�����ڷ� �ʱ�ȭ
    {
        Title = title;
        Singer = singer;
    }
    virtual void getProduct() const         //Product Ŭ���� getProduct �������̵�
    {
        cout << "+++++++++CD+++++++++++" << endl;
        Product::getProduct();
        cout << "Title : " << Title << endl;
        cout << "Singer : " << Singer << endl;
    }
};

class Cellphone :public Product         //CellphoneŬ���� ������ ���
{
private:
    string Model;

public:
    Cellphone(int idx, int price, string description, string model) : Product(idx, price, description)      //������
    {
        Model = model;
    }

    virtual void getProduct() const             //Product Ŭ���� getProduct �������̵�
    {
        cout << "++++++++++Cellphone++++++++++" << endl;
        Product::getProduct();
        cout << "Model : " << Model << endl;
    }

};
class Handle
{
private:
    vector<int> prod_list;                     //vector�� �ڵ� �����Ҵ�

    static int idx;                         //static idx���� ����
    Product* pobj[100];                     //��� ��ǰ �����Ҵ��� �迭
public:
    Handle() {}

    void ShowMenu(void) const               //�޴�
    {
        cout << "++++++++POS++++++++++" << endl << endl;
        cout << "1. ��ǰ �߰�" << endl;
        cout << "2. ��ǰ ��ȸ" << endl;
        cout << "3. ��ǰ ����" << endl;
        cout << "4. �� ��" << endl;
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
            PlusBook();                             //Book�߰� �Լ�
        }

        else if(option == 2)
        {
            cout << "2. CD" << endl;
            PlusCD();                               //CD �߰� �Լ�
        }

        else if(option == 3)
        {
            cout << "3. Cellphone" << endl;
            pluscellphone();                        //cellphone �߰� �Լ�
        }

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

        cout << "Idx : " << idx << endl;
        cout << "Title : "; cin >> title;
        cout << "Writer : "; cin >> writer;
        cout << "Publisher : "; cin >> publisher;
        cout << "Price : "; cin >> price;
        cout << "Description : "; cin >> description;
        cout << endl;

        pobj[idx] = new Book(idx, price, description, title, writer, publisher);                //�����Ҵ�
        prod_list.push_back(idx);                                                               //���Ϳ� �߰�
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

    void pluscellphone(void)                    //cellphone �Է¹޴� �Լ�
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

        cout <<"������ Idx �Է�" <<endl;
        cout << "Idx : "; cin >> idx;
        cout << endl;

        for (vector<int>::iterator it = prod_list.begin(); it != prod_list.end();) {

                it = prod_list.erase(prod_list.begin() + idx);
          
        }

    }

    void ShowAll_book(void) const                  //��� ��ǰ ���
    {
        cout << "-------------------------" << endl;
        for (int i = 0; i < prod_list.size(); i++)
            pobj[i]->getProduct();
        cout << "-------------------------" << endl;
    }

    ~Handle()                                   //�Ҹ���
    {
        for (int i = 0; i < idx; i++)
            delete pobj[i];
    }

};

int Handle::idx = 0;            //Handle Ŭ���� static ���� �ʱ�ȭ

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
            manager.ShowAll_book();
            break;
        case Bye:
            manager.Bye();
            break;
        case EXIT:
            return 0;
        default:
            cout << "�߸��Է�" << endl;
        }
    }
    return 0;
}