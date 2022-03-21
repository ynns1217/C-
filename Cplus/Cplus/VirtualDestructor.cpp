#include<iostream>
using namespace std;

class First
{
private:
	char* strOne;

public:

	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];			//�����Ҵ�
	}
	~First()				//�Ҹ���
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second :public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) :First(str1)				//�����Ҵ�
	{
		strTwo = new char[strlen(str2) + 1];
	}
	~Second()
	{
		cout << "~Second()" << endl;					//�Ҹ���
		delete[]strTwo;
	}
};

int main(void)
{
	First* ptr = new Second("simple", "conplex");				
	delete ptr;					//FirstŬ������ �Ҹ��ڿ� SecondŬ������ �Ҹ��ڰ� ���ÿ� ȣ��

	return 0;
}