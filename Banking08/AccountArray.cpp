#include "BankingCommonDecl.h"
#include "AccountArray.h"

BoundCheckAccountPtrArray::BoundCheckAccountPtrArray(int len) : arrlen(len)
{
	arr = new ACCOUNT_PTR[len];
}

ACCOUNT_PTR& BoundCheckAccountPtrArray::operator[](int idx)
{
	if (idx<0||idx>arrlen)
	{
		cout << "존재한다" << endl;
		exit(1);
	}
	return arr[idx];
}

int BoundCheckAccountPtrArray::GetArrlen() const
{
	return arrlen;
}

	BoundCheckAccountPtrArray::~BoundCheckAccountPtrArray()
	{
		delete[]arr;
	}
