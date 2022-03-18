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
		cout << "차 클래스 생성자" << endl;
	}

	int Getgas()
	{
		return gasoil;
	}

	void GasRyang()
	{
		cout << "기름 :" << gasoil << endl;
	}
};

class Hybrid :public Car
{
private:
	int hybrid;

public:
	Hybrid(int mygasoil, int myhybrid) : Car (mygasoil),hybrid(myhybrid)
	{
		cout << "하이브리드 클래스 생성자" << endl;
	}
	int Gethybrid() 
	{
		return hybrid;
	}

	void HybRyang()
	{
		cout << "물 :" << hybrid << endl;
	}
};

class Water :public Hybrid
{
private:
	int water;

public:

	Water(int mygasoil, int myhybrid,int mywater) : Hybrid(mygasoil, myhybrid),water(mywater)
	{
		cout << "워터 클래스 생성자" << endl;
	}
	int GetWater()
	{
		return water;
	}

	void WaterRyang()
	{
		GasRyang();
		HybRyang();
		cout << "물 :" << water << endl;
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

