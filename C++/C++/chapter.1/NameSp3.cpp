#include <iostream>
using namespace std;

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace BestComImp1
{
	void PrettyFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)
{
	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc();					//동일 이름공간
	ProgComImp1::SimpleFunc();		//다른 이름 공간
}

void BestComImp1::PrettyFunc(void)
{
	cout <<"So Pretty!!" << endl;
}

void ProgComImp1::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}