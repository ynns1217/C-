#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;

public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{
		cout << "인자 2개를 갖는 생성자 호출" << endl;
	}

	//주석처리해도 실행됨 -> 복삼생성자는 디폴트로 제공하고 있ㅇ음

	//SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2)
	//{
	//	cout << "복사생성자 호출" << endl;
	//}

	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}

};
int main(void)
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();

	return 0;
}