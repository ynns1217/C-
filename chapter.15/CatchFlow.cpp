//예외가 발생하면 해당 catch 블록을 위엣 ㅓ아래로 순서대로 찾음

#include <iostream>
using namespace std;

class AAA
{
public:
	void ShowYou() { cout << "AAA 예외" << endl; }
};

class BBB:public AAA
{
public:
	void ShowYou() { cout << "BBB 예외" << endl; }
};

class CCC:public BBB
{
public:
	void ShowYou() { cout << "CCC 예외" << endl; }
};

void ExceptionGenerator(int expn)
{
	if (expn == 1)
		throw AAA();
	else if (expn == 2)
		throw BBB();
	else 
		throw CCC();

}

int main(void)
{
	try
	{		

		ExceptionGenerator(3);
		ExceptionGenerator(2);
		ExceptionGenerator(1);
	}
	catch (AAA& expn)
	{
		cout << "catch(AAA& expn" << endl;
		expn.ShowYou();
	}

	catch (BBB& expn)
	{
		cout << "catch(BBB& expn" << endl;
		expn.ShowYou();
	}

	catch (CCC& expn)
	{
		cout << "catch(CCC& expn" << endl;
		expn.ShowYou();
	}

	//생각했던대로 하기위해선 catch  CCC먼저 만들고 BBB AAA를 만들면 된다
	//순차적으로 찾기때문이다.

	return 0;
}