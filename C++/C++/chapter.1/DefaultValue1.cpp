#include <iostream>

int Adder(int num1 = 1, int num2 = 2)	//Adeder 함수의 디폭트 값으로 1과 2가 설정되었다.
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;			//Adder 함수르 호출하면서 인자를 전다랗지 않았으므로 1과 2가 전다로딘 것으로 간주
	std::cout << Adder(5) << std::endl;			//Adder 함수를 호출하면서 이자를 하나만 전달 -> 인자는 첫번째 매개변수로만 전달되고 두번째 매개변수는 디폴트값인 2가 전달
	std::cout << Adder(3, 5) << std::endl;		//Adder 함수를 호출하면서 두 개의 인자를 직접전달-> 매개변수의 디폴트값대신 직접 전달한 값으로 간주
	return 0;
}