
//멤버벼수에 저장된 값을 수정하지 않느 ㄴ함수는 가급적 const로 선언해서 const 객체에서도 호출이 가능하도록 할 필요가있다.
#include<iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num:" << num << endl;
	}

};

int main(void)
{
	const SoSimple obj(7);
	//obj.AddNum(20);
	obj.ShowData();
	return 0;
}