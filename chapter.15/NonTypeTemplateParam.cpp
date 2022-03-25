//배열의 길이를 결정하기위해 굳이 템플릿 매개변수에 정수를 전달하는 작업엇이 생성자를 이용

#include <iostream>
using namespace std;

template<typename T ,int len>
class SimpleArray
{
private:
	T arr[len];

public:

	T& operator[] (int idx) { return arr[idx]; }
	SimpleArray<T, len>& operator= (const SimpleArray<T, len>& ref)
	{
		for (int i = 0; i < len; i++)
			arr[i] = ref.arr[i];
		return *this;
	}
};

int main(void)
{
	SimpleArray<int, 5> i5arr1;
	for (int i = 0; i < 5; i ++ )
		i5arr1[i] = i * 10;

	SimpleArray<int, 5> i5arr2;
	i5arr2 = i5arr1;
	for (int i = 0; i < 5; i++)
		cout << i5arr2[i] << ",";
	cout << endl;

	SimpleArray<int, 7> i7arr1;
	for (int i = 0; i < 7; i++)
	{
		i7arr1[i] = i * 10;

		SimpleArray<int, 7> i7arr2;
		i7arr2 = i7arr1;
		for (int i = 0; i < 7; i++)
			cout << i7arr2[i] << ",";
		cout << endl;

		return 0;
	}
}