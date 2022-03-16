#include <iostream>
using namespace std;
namespace Hybrid
{
	void HybFunc(void)
	{
		cout << "So simple function!" << endl;
		cout << "In namespace Hybrid!" << endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;			//using을 사요앻서 이름공간 Hybrid에 저장된 HybFunc호출 할땐 이름공간 없이 호출하겠다고 선언
	HybFunc();
	return 0;
}