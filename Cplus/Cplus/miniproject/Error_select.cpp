#include "handler.h"

void Handler::AddError()         //��ȯ��ȣ �۵� �޴� (���� yes or no)
{
 
    int sel;      //��ȣ����

    cout << "������ �߻��ϼ̽��ϱ�?" << endl;
    cout << "(1)OK" << endl;
    cout << "(2)NO" << endl;
    cin >> sel;

    switch (sel)
    {
    case 1:
    {
        AddError_1();
        
        break;
    }
    case 2:
    {
        cout << "������ �߻����� �ʾҽ��ϴ�." << endl;
        system("puase");
        break;
    }
    }
}


//-------��з� ���� ------//
void Handler::AddError_1()   // ��ȯ��ȣ �۵� �޴�
{
    int sel;

    cout << "��� ������ �߻��ϼ̽��ϱ�?" << endl;

    string a = "��ǰ�ҷ�";
    string b = "�����ҷ�";

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:

        AddError_2_1();
        break;

    case 2:
        AddError_2_2();
        break;
    }
}

//-------�ߺз� ���� -----//
void Handler::AddError_2_1()   //���� ��ȯ�ϱ� ���� �޴�
{
    int sel;

    cout << "-------��ǰ�ҷ��� �߻��Ͽ����ϴ�.------" << endl;
    cout << "��� ��ǰ�� �ҷ��� �߻��Ͽ����ϱ�?" << endl;

    string a = "CPU";
    string b = "RAM";
    string c = "���κ���";

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_part = 1;
        AddError_3_1_1(); 
        break;
    case 2:
        Err_part = 2;
        AddError_3_1_2();
        break;
    case 3:
        Err_part = 3;
        AddError_3_1_3();                        
        break;
    }

}
void Handler::AddError_2_2()
{
    int sel;
    

    cout << "------�����ҷ��� �߻��Ͽ����ϴ�----" << endl;
    cout << "��� ��ǰ�� �ҷ��� �߻��Ͽ����ϱ�?" << endl;

    string a = "CPU";
    string b = "RAM";
    string c = "���κ���";

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        //AddError_3_2_1();
                        
        break;
    case 2:
        //AddError_3_2_2();
                       
        break;
    case 3:
        //AddError_3_2_3();
                        
        break;
    }

}

//----�Һз� ���� ---//
void Handler::AddError_3_1_1()
{
    int sel;

    cout << "-----��ǰ�ҷ��� �߻��Ͽ����ϴ� ----" << endl;

    string a = "ũ��ҷ�";
    string b = "��ǰ�ļ�";
    string c = "��ǰ�ջ�";

    cout << "��� �ҷ��� �߻��Ͽ����ϱ�?" << endl;

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_msg = a;
        break;
    case 2:
        Err_msg = b;
        break;
    case 3:
        Err_msg = c;
        break;
    }
}

void Handler::AddError_3_1_2()
{
    int sel;

    cout << "-----��ǰ�ҷ��� �߻��Ͽ����ϴ� ----" << endl;

    string a = "ũ��ҷ�";
    string b = "��ǰ�ļ�";
    string c = "��ǰ�ջ�";

    cout << "��� �ҷ��� �߻��Ͽ����ϱ�?" << endl;

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_msg = a;
        break;
    case 2:
        Err_msg = b;
        break;
    case 3:
        Err_msg = c;
        break;
    }

}

void Handler::AddError_3_1_3()
{
    int sel;
    cout << "-----��ǰ�ҷ��� �߻��Ͽ����ϴ� ----" << endl;

    string a = "ũ��ҷ�";
    string b = "��ǰ�ļ�";
    string c = "��ǰ�ջ�";

    cout << "��� �ҷ��� �߻��Ͽ����ϱ�?" << endl;

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_msg = a;
        break;
    case 2:
        Err_msg = b;
        break;
    case 3:
        Err_msg = c;
        break;
    }

}