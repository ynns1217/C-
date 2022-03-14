//참조자의 이해
//참조자란 변수 이름의 또다른 별명
//변수는 메모리 공간에 붙여진 이름, 둘이상의 이름을 부여한다면 

#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1;
	cout << "VAL : " << num1 << endl;				//1020
	cout << "REF: " << num2 << endl;			//1020

	num2 = 3047;
	cout << "VAL : "<<num1 << endl;				//3047
	cout << "REF: " << num2 << endl;			//3047
		
	cout << "VAL: " << &num1 << endl;			//num1의 주소값
	cout << "REF: " << &num2 << endl;			//num2의 주소값
	return 0;
}