//포인터를 통한 데이터 지정은 안되지만
//변수를 통한 데이터 지정은 가능하다


//프로그램이 실행된다 -> 프로그램이 메모리에 올라왔다


#include <iostream>
//#define TRUE	1			//-1도 0이 아니기때문에 참으로 정의
//#define FALSE	0
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;

	cout << "true : " << true << endl;
	cout << "false: " << false << endl;

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
		{
			break;
		}
		cout << endl;

		cout << "sizeof 1 : " << sizeof(1) << endl;					//정수 크기인 4 출력
		cout << "sizeof 0 :" << sizeof(0) << endl;
		cout << "sizeof true : " << sizeof(true) << endl;			//bool 크기인 1 출력
		cout << "sizeof false :" << sizeof(false) << endl;

		return 0;
	}

}