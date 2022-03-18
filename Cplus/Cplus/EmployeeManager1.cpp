//상속 이해
//정규직 직원을 관리하기 위한 형태로 설계

#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;				//매달 지불해야하는 급여액

public:
	PermanentWorker(char* name, int money) :salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const {
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

//이 회사의 정규직 급여는 입사 당시 정해진다(급여 인상부분은 고려x)
//이름과 급여정보를 저장할 수 있도록 클래스 정의
//PErmanentWorker 객체의 저장을 목적으로 배열을 멤버로 지님, 젖아된객체 급여정보 출력하는 함수
class EmployeeHandler
{
private:
	PermanentWorker* empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0)
	{}

	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum:" << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

//두 클래스를 기반으로 main함수
int main(void)
{
	//직원관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	//직원등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUM", 2000));

	//이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	//이번 달에 지불해야 할 급여의 총ㅇ합
	handler.ShowtotalSalary();

	return 0;
}