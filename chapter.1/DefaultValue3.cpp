#include<iostream>
using namespace std;
//매개변수는 실질적으로 왼쪽부터 적용되므로 디폴트값은 꼭 오른쪽부터 채워야된다

int BoxVolume(int length, int width = 1, int height = 1);

int main(void)
{
	cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5,5,D] :" << BoxVolume(5, 5, 0) << endl;
	cout << "[7, D, D] :" << BoxVolume(7) << endl;
	//cout << "[D,D,D] : " << BoxVolume() << endl;
	//모든 매개변수에 디폴트 값이 지정된 것이 아니기때문에 인자를 전달하지 않는 형태의 함수 호출은 에러난다.
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
