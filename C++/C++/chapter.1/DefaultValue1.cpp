#include <iostream>

int Adder(int num1 = 1, int num2 = 2)	//Adeder �Լ��� ����Ʈ ������ 1�� 2�� �����Ǿ���.
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;			//Adder �Լ��� ȣ���ϸ鼭 ���ڸ� ���ٶ��� �ʾ����Ƿ� 1�� 2�� ���ٷε� ������ ����
	std::cout << Adder(5) << std::endl;			//Adder �Լ��� ȣ���ϸ鼭 ���ڸ� �ϳ��� ���� -> ���ڴ� ù��° �Ű������θ� ���޵ǰ� �ι�° �Ű������� ����Ʈ���� 2�� ����
	std::cout << Adder(3, 5) << std::endl;		//Adder �Լ��� ȣ���ϸ鼭 �� ���� ���ڸ� ��������-> �Ű������� ����Ʈ����� ���� ������ ������ ����
	return 0;
}