#include<iostream>
#include <cstring>
using namespace std;

class Girl;			//Girl�̶�� �Ӥ����� Ŭ������ �̸����� �˸�

class Boy
{

private:
	int height;
	friend class Girl;		//Girl Ŭ������ ���� friend ����

public:
	Boy(int len) : height(len)
	{}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {

private:
	char phNum[20];

public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendInfo(Boy& fre);
	friend class Boy;			//Boy Ŭ������ ���� freind����
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height:" << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("010-1234-4567");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}