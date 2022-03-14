#include <iostream>
using namespace std;
//키워드 inline을 통해서 함수가 인라인 함수가되었다
inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	cout << SQUARE(5) << endl;		//함수 호출 , 인라인함수이니 몸체부분이 호출문을 대체
	cout << SQUARE(12) << endl;
	return 0;
}