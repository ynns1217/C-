#include <iostream>
#include <cstring>
using namespace std;
#pragma warning(disable:4996)
class Human
{
private:
	char name[20];
	int age;
public:
	Human(const char* name, int age)

	{
		strcpy(this->name, name);
		this->age = age;
		cout << "생성자호출 " << endl;
	}

	void viewHuman()
	{
		cout << "이름:" << name << "," << "나이:" << age << endl;
	}
};

int main()
{
	Human h1("홍기롱", 30);
	h1.viewHuman();

	return 0;
}