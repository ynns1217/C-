#include <iostream>
#include <cstring>
using namespace std;
#include "StringClass.h"

class String
{
private:

public:		
	
	int len;
	char* str;


	String()
	{
		len = 0;
		str = NULL;
	}
	String(const char* s)
	{
		len = strlen(s) + 1;
		str = new char[len];
		strcpy(str, s);
	}
	String(const String& s)
	{
		len = s.len;
		str = new char[len];
		strcpy(str, s.str);
	}
	~String()
	{
		if (str != NULL)
			delete[]str;
	}
	String& operator= (const String& s)
	{
		if (str != NULL)
			delete[]str;
		len = s.len;
		str = new char[len];
		strcpy(str, s.str);

		return *this;
	}
	String& operator+=(const String& s)
	{
		len += (s.len - 1);
		char *tempstr = new char[len];
		strcpy(tempstr, str);
		strcat(tempstr, s.str);

		if (str != NULL)
			delete[]str;
		str = tempstr;

		return *this;
	}
	bool operator== (const String& s)
	{
		return strcmp(str, s.str) ? false : true;
	}
	String operator+ (const String& s)
	{
		char* tempstr = new char[len + s.len - 1];
		strcpy(tempstr, str);
		strcat(tempstr, s.str);

		String temp(tempstr);		//String temp = tempsttr;
		delete[]tempstr;

		return temp;
	}
};

ostream& operator<< (ostream& os, const String& s)
{
	os << s.str;
	return os;
}

istream& operator>>(istream& is, String& s)
{
	char str[100];
	is >> str;
	s = String(str);

	return is;
}

int main(void)
{
	String str1 = "Ilike";
	String str2 = "string class";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if(str1==str3)
		cout<<"동일 문자형"<<endl;
	else
		cout << "다른 문자형" << endl;

	String strd;
	cout << "문자열 입력:";
	cin >> strd;
	cout << "입력한 문자열:" << strd << endl;

	return 0;

}

