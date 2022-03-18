//소유관계도 상속으로 표현가능

#include<iostream>
#include < cstring>
using namespace std;

class Gun
{
private:
	int bullet;				//장전된 총알의 수
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "빵야" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;				//소유한 수갑의 수
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff()
	{
		cout << "철컹" << endl;
		handcuffs--;
	}
};

int mainv(void)
{
	Police pman(5, 3);		//총알 다섯개 수갑 세개
	pman.Shot();
	pman.PutHandcuff(); 

	return 0;
}