#include<iostream>
using namespace std;
//�Ű������� ���������� ���ʺ��� ����ǹǷ� ����Ʈ���� �� �����ʺ��� ä���ߵȴ�

int BoxVolume(int length, int width = 1, int height = 1);

int main(void)
{
	cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5,5,D] :" << BoxVolume(5, 5, 0) << endl;
	cout << "[7, D, D] :" << BoxVolume(7) << endl;
	//cout << "[D,D,D] : " << BoxVolume() << endl;
	//��� �Ű������� ����Ʈ ���� ������ ���� �ƴϱ⶧���� ���ڸ� �������� �ʴ� ������ �Լ� ȣ���� ��������.
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
