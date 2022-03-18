//반환할 대 만들어진 객체는 언제 사라져요?

#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) :num(n)
	{
		cout << "creat obj:" << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj:" << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "Mynum is" << num << endl;
	}
};
int main(void)
{
	Temporary(100);
	cout << "************aftter make" << endl;

	Temporary(200).ShowTempInfo();
	cout << "*********after make"<<endl;

	const Temporary& ref = Temporary(300);
	cout << "**********end of main" << endl;

	return 0;