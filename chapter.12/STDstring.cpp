#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1 = "I like";
	string str2 = "string class";
	string str3 = str1 + str2;
	string str5("good morning");

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str5 << endl;

	cout << str3.at(5) << endl;			//5번째 인덱스 출력
	cout << str3.front() << endl;		//맨 첫자
	cout << str3.back()<< endl;			//맨 끝자
	cout << str3.size() << endl;		//글자 길이(문자열 크기)출력 18+NULL
	cout << str3.capacity() << endl;	//31	//실질적으로 객체가 메모리에 할당된                                         크기 (메모리 공간 크기)


	str1 += str2;

	if (str1 == str3)
		cout << "동일 문자열" << endl;
	else
		cout << "다른 문자열" << endl;

	string str4;
	cout << "문자열 입력:";
	cin >> str3;
	cout << "입력한 문자열:" << str3 << endl;

	return 0;
}
