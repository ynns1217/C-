//const변수와 마찬가ㅣㅈ로 참조자도 서언고 ㅏ동시에 초기화가 이뤄져야 한다.

#include <iostream>
using namespace std;


class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShoYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	const int& num;
public:
	BBB(AAA& r, const int& n) : ref(r), num(n)
	{

	}
	void ShowYourName()
	{
		ref.ShoYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
}