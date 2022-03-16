#include <iostream>

int main(void)
{
	int i;
	int sum=0;
	for (i = 1; i < 6; i++)
	{
		std::cout << i << "번째 정수 입력" << std::endl;
		std::cin >> i;
		sum += i;
	}

	std::cout << "합계 :" << sum;

}