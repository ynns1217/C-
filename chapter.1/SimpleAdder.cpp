#include <iostream>

int main(void)
{
	int vall;
	std::cout << "첫 번째 숫자입력:";
	std::cin >> vall;

	int val2;

	std::cout << "두 번째 숫자 입력:";
	std::cin >> val2;

	int result = vall + val2;
	std::cout << "덧셈결과 : " << result << std::endl;
	return 0;
}