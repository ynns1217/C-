//��� ����
//������ ������ �����ϱ� ���� ���·� ����

#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;				//�Ŵ� �����ؾ��ϴ� �޿���

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

//�� ȸ���� ������ �޿��� �Ի� ��� ��������(�޿� �λ�κ��� ���x)
//�̸��� �޿������� ������ �� �ֵ��� Ŭ���� ����
//PErmanentWorker ��ü�� ������ �������� �迭�� ����� ����, ���ƵȰ�ü �޿����� ����ϴ� �Լ�
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

//�� Ŭ������ ������� main�Լ�
int main(void)
{
	//���������� �������� ����� ��Ʈ�� Ŭ������ ��ü ����
	EmployeeHandler handler;

	//�������
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUM", 2000));

	//�̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	//�̹� �޿� �����ؾ� �� �޿��� �Ѥ���
	handler.ShowtotalSalary();

	return 0;
}