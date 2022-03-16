#include <iostream>
using namespace std;

namespace BestComImp1				//같은 함수 다른 이름 공간에 마련
{
	void SimpleFunc(void)
	{
		cout << "BestCom이 정의한 함수 " << endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		cout << "ProgCom이 정의한 함수" << endl;
	}
}

int main(void)
{
	BestComImp1::SimpleFunc();				//같은 함수지만 다른 공간에 정의되어있을 때 호출하는 법
	ProgComImp1::SimpleFunc();
	return 0;
}