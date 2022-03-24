#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}
template <>
char* Max(char* a, char* b)
{
	cout << "char*Max<char*>(char*a,char*b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

template<>
const char* Max(const char* a, const char* b)
{
	cout << "const char * Max<const char *>(const char *a,cosnt char *b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q')<< endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;			//문자여르이 선언을 ㅗ인해서 반환되는 주소값의 포인터 형은 const char*이다 따라서 이 문장에 의해 호출되는 함수는 두번째 Max함수이다.

	char str1[] = "Simple";
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;		//str1,str2는 변수 형태로 선언되었다 따라서 포인터형은 char * 이다. 이 문장에 의해 호출되는 함수는 첫번째 Max함수이다.

	return 0;
}