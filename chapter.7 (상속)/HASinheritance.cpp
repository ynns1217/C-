//�������赵 ������� ǥ������

#include<iostream>
#include < cstring>
using namespace std;

class Gun
{
private:
	int bullet;				//������ �Ѿ��� ��
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "����" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;				//������ ������ ��
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff()
	{
		cout << "ö��" << endl;
		handcuffs--;
	}
};

int mainv(void)
{
	Police pman(5, 3);		//�Ѿ� �ټ��� ���� ����
	pman.Shot();
	pman.PutHandcuff(); 

	return 0;
}