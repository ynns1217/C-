#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector <int> v;
	for (int i = 0; i < 20; i++)
	{
		v.push_back(i + 1);
		printf("v[%d] = %d\n", i, v[i]);

	}

	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//vector <int>::iterator iter;
	//for (iter = v.begin(); iter < v.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}

	vector<string> s;
	s.push_back("tiger");
	s.push_back("lion");
	s.push_back("hours");
	s.push_back("rabbit");
	s.push_back("elephant");

	vector <string>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		if (*iter == "lion")
		{
			s.erase(iter);		//반복자를 삭제하는 멤버함수
			break;
		}
	}

	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << s.front() << endl; //맨첫번재 출력

	return 0;
}