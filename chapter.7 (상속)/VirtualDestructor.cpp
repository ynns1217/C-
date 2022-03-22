#include<iostream>
using namespace std;

class First
{
private:
	char* strOne;

public:

	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];			//동적할당
	}
	~First()				//소멸자
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
	Second(const char* str1, const char* str2) :First(str1)				//동적할당
	{
		strTwo = new char[strlen(str2) + 1];
	}
	~Second()
	{
		cout << "~Second()" << endl;					//소멸자
		delete[]strTwo;
	}
};

int main(void)
{
	First* ptr = new Second("simple", "conplex");				
	delete ptr;					//First클래스의 소멸자와 Second클래스의 소멸자가 동시에 호출

	return 0;
}