//�������� �ƴ� �ٸ� ������� ǥ��

#include <iostream>
#include <cstring>
using namespace std;

class Gun {
private:
	int bullet;		//������ �Ѿ��� ��
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "����!!!!!" << endl;
		bullet--;
	}
};

class Police 
{
private:
	int handcuffs;			//�����ϰ� �ִ� ������ ��
	Gun* pistol;			//�����ϰ��ִ� ���� ������
public:
	Police(int bnum, int bcuff) :  handcuffs(bcuff)				//������ ����
	{
		if (bnum > 0)
		{
			pistol = new Gun(bnum);			//�Ѿ� �����Ҵ�
		}
		else
		{
			pistol = NULL;
		}
	}


	void PutHandcuff()
	{
		cout << "ö��ö��" << endl;
		handcuffs--;
	}


	void shot()
	{
		if (pistol == NULL)
		{
			cout << "��,,,��,,,? ��������" << endl;
		}

		else
		{
			pistol->Shot();
		}
	}
	~Police()
	{
		if (pistol != NULL)
		{
			delete pistol;
		}
	}
};

int main(void)
{
	Police pman1(5, 3);
	pman1.shot();
	pman1.PutHandcuff();



	Police pman2(0, 3);				//������ �������� ���� ����
	pman2.shot();
	pman2.PutHandcuff();
	return 0;
}