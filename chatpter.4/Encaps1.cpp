#include <iostream>
using namespace std;

class Sinive1Cap
{

public:
	void Take() const
	{
		cout << "Äà¹°ÀÌ ½Ï ³³´Ï´Ù." << endl;
	}
};

class SneezeCap
{

public:
	void Take() const
	{
		cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù." << endl;
	}
};

class SnuffleCap
{

public:
	void Take() const
	{
		cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù." << endl;
	}
};

class ColdPatient
{
public:
	void TakeSinive1Cap(const Sinive1Cap& cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
};

int main(void)
{
	Sinive1Cap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinive1Cap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}