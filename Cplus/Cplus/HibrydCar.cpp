#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;


class Car
{
private:
	int gasoil;
public:
	Car(int mygasoil) :gasoil(mygasoil)
	{
		cout << "�� Ŭ���� ������" << endl;
	}

	int Getgas()
	{
		return gasoil;
	}

	void GasRyang()
	{
		cout << "�⸧ :" << gasoil << endl;
	}
};

class Hybrid :public Car
{
private:
	int hybrid;

public:
	Hybrid(int mygasoil, int myhybrid) : Car (mygasoil),hybrid(myhybrid)
	{
		cout << "���̺긮�� Ŭ���� ������" << endl;
	}
	int Gethybrid() 
	{
		return hybrid;
	}

	void HybRyang()
	{
		cout << "�� :" << hybrid << endl;
	}
};

class Water :public Hybrid
{
private:
	int water;

public:

	Water(int mygasoil, int myhybrid,int mywater) : Hybrid(mygasoil, myhybrid),water(mywater)
	{
		cout << "���� Ŭ���� ������" << endl;
	}
	int GetWater()
	{
		return water;
	}

	void WaterRyang()
	{
		GasRyang();
		HybRyang();
		cout << "�� :" << water << endl;
	}

	void All()
	{
		cout<<Getgas()
		<<Gethybrid()
		<<GetWater();
	}
};


int main(void)
{
	Water car1(100,50,30);
	car1.WaterRyang();

	Water car2(100, 50, 30);
	car2.All();
}

