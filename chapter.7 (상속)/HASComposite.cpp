//관계상속이 아닌 다른 방식으로 표현

#include <iostream>
#include <cstring>
using namespace std;

class Gun {
private:
	int bullet;		//장전된 총알의 수
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "빵야!!!!!" << endl;
		bullet--;
	}
};

class Police 
{
private:
	int handcuffs;			//소유하고 있는 수갑의 수
	Gun* pistol;			//소유하고있는 권총 포인터
public:
	Police(int bnum, int bcuff) :  handcuffs(bcuff)				//생성자 정리
	{
		if (bnum > 0)
		{
			pistol = new Gun(bnum);			//총알 동적할당
		}
		else
		{
			pistol = NULL;
		}
	}


	void PutHandcuff()
	{
		cout << "철컹철컹" << endl;
		handcuffs--;
	}


	void shot()
	{
		if (pistol == NULL)
		{
			cout << "빵,,,어,,,? 수갑수갑" << endl;
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



	Police pman2(0, 3);				//권총을 소유하지 않은 경찰
	pman2.shot();
	pman2.PutHandcuff();
	return 0;
}