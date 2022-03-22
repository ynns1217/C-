#include <iostream>
using namespace std;

//클래스 Data를 흉내 낸 영역
typedef struct Data
{
	int data;
	void (*ShowData)(Data*);
	void (*Add)(Data*, int);
}Data;

void ShowData(Data* THIS)
{
	cout << "Data:" << THIS->data << endl;
}
void Add(Data* THIS, int num) { THIS->data += num; }


//적절히 변경된 main 함수
int main(void)
{
	Data obj1 = { 15,ShowData,Add };			//obj 구조체 선언
	Data obj2 = { 7, ShowData,Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);				//32
	obj2.ShowData(&obj2);				//16

	return 0;
}