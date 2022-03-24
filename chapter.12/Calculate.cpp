#include <iostream>
using namespace std;

template<typename T>
class Cal
{
private:
		T Num1, Num2;
public:
	Cal(T num1, T num2) :Num1(num1), Num2(num2)
	{}

	//T GetNum(T num1, T num2) : Num1(num1), Num2(num2)
	//{ cin >> num1; cin >> num2;
	//return num1, num2
	//};

	T Hab(T num1, T num2)
	{
		cout << "합: " << num1 + num2<<endl;
		return num1 + num2;
	}
	T Cha(T num1, T num2)
	{
		cout << "차: " << num1 - num2<< endl;
		return num1 - num2;
	}
	T  Gob(T num1, T num2)
	{
		cout << "곱: " << num1 * num2<< endl;
		return num1 * num2;
	}
	T  Nanu(T num1, T num2)
	{
		cout << "나누기: " << num1 / num2<< endl;
		return num1 / num2;
	}
};

int main(void)
{
	Cal<double>nu(3, 4);
	nu.Hab(3, 4);
	nu.Cha(3, 4);
	nu.Gob(3, 4);
	nu.Nanu(3, 4);


}