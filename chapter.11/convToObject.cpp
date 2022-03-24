//오버로딩 된 대입 연산자를 통해서 비교가능
//객체와 정수간의 대입연산도 가능

#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0) " << endl;

	}
	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}

	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num;
	num = 30;
	num.ShowNumber();

	return 0;
}
