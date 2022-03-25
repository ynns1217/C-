//함수 호출하고 안에서 throw절 실행되며 예외 발생
//try chatch 문이 조재하지않지만 예외처리에 대한 책임은 gkatnfmf ghcnfgks duddurdmfh sjadjrkrpehlsek.
#include <iostream>
using namespace std;

void Divide(int num1, int num2)
{
	if (num2 == 0)
		throw num2;

	cout << "나눗셈의 몫: " << num1 / num2 << endl;
	cout << "나눗셈의 나머지: " << num1 % num2 << endl;
}

int main(void)
{
	int num1, num2;
	cout << "두 개의 숫자 입력: ";
	cin >> num1 >> num2;

	try {
		Divide(num1, num2);
		cout << "나눗셈으 마ㅕㅆ습니다." << endl;
	}
	catch (int expn)
	{
		cout << "제슈는 " << expn << "이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행사ㅔ요." << endl;
	}
}