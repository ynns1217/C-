#include <iostream>

int main(void)
{
	int i;
	int sum=0;
	for (i = 1; i < 6; i++)
	{
		std::cout << i << "��° ���� �Է�" << std::endl;
		std::cin >> i;
		sum += i;
	}

	std::cout << "�հ� :" << sum;

}