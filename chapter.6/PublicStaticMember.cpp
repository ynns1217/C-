//static��������� ��ü ���� �������� �ʴ´ٴ� ��ǵ� ����

#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public:
	//���ʿ������� ������ �Լ��� ������ �������� �����ϱ⵵�ճ�
	SoSimple()
	{
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;

int main(void)
{
	cout << SoSimple::simObjCnt << "��° SoSimople ��ü" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSimpkle ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;
	return 0;
}