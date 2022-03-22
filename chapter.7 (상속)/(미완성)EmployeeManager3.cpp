#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name:" << name << endl;
	}
};

class PermanentWorker : public Employee
{
private:
	int salary;				//월급여
public:
	PermanentWorker(char* name, int money) : Employee(name), salary(money)
	{}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary:" << GetPay() << endl << endl;
	}
};

class TemporaryWorker :public Employee			//일시직
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char name,int pay) : Employee(name), workTime(0), payPerHour(pay)
	{}
	void AddWorTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;		//일한 시간 시간 급여일한시간
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary:" << GetPay() << endl<<endl;
	}

};

class SaleWorker : public PermanentWorker		//영업직
{
private:
	int slaesResult;				//월 판매실적
	double bonusRatio;				//상여금 비율
public:
	SaleWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult* bonusRatio)		//인센티브
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay << endl<< endl;
	}
};

class EmployeeHandler
{

};

int main(void)
{


	//위 클래스와 함수로 메인에서 활용해보기
	// 
	// 
	//직원관리르 ㄹ목적으로 설계돈 컨트롤 클래스의 객체 생성
	EmployeeHandler hander;

	//정규직 등록

}