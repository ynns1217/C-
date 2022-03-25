//���ܰ� �߻��ϸ� �ش� catch ����� ���� �þƷ��� ������� ã��

#include <iostream>
using namespace std;

class AAA
{
public:
	void ShowYou() { cout << "AAA ����" << endl; }
};

class BBB:public AAA
{
public:
	void ShowYou() { cout << "BBB ����" << endl; }
};

class CCC:public BBB
{
public:
	void ShowYou() { cout << "CCC ����" << endl; }
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

	//�����ߴ���� �ϱ����ؼ� catch  CCC���� ����� BBB AAA�� ����� �ȴ�
	//���������� ã�⶧���̴�.

	return 0;
}