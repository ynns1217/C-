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
	int salary;				//���޿�
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

class TemporaryWorker :public Employee			//�Ͻ���
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
		return workTime * payPerHour;		//���� �ð� �ð� �޿����ѽð�
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary:" << GetPay() << endl<<endl;
	}

};

class SaleWorker : public PermanentWorker		//������
{
private:
	int slaesResult;				//�� �ǸŽ���
	double bonusRatio;				//�󿩱� ����
public:
	SaleWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult* bonusRatio)		//�μ�Ƽ��
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


	//�� Ŭ������ �Լ��� ���ο��� Ȱ���غ���
	// 
	// 
	//���������� ���������� ���起 ��Ʈ�� Ŭ������ ��ü ����
	EmployeeHandler hander;

	//������ ���

}