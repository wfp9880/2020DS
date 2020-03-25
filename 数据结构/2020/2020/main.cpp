#include "DS.h"
#include "LList.h"
#include <vector>
using namespace std;
using namespace DS;
using namespace DS::List;

void DeleteElem(SqList& L, const int& i, const int& j)
{
	L.Print();
	//删除下标i~j的所有元素
	if (L.Empty())
	{
		return;
	}
	const int& interval = j - i + 1;
	for (int index=i;index<L.length-interval;++index)
	{
		L.data[index ] = L.data[index + interval ];
	}
	L.length -= interval;
	L.Printf("删除下标%d到%d之间的元素后列表为: ", i, j);
}

void Reserve(SqList& L)
{
	//////////////////////////////////////////////////////////////////////////
	//将小于表头元素的放在前面,大于表头元素的放后面;
	//////////////////////////////////////////////////////////////////////////
	if (L.Empty())
	{
		return;
	}
	L.Print();
	const ElemType& temp = L.data[0];
	vector<ElemType> D;
	vector<ElemType> U;
	for (int i=1;i<L.length;++i)
	{
		if (L.data[i]<temp)
		{
			D.emplace_back(L.data[i]);
		}
		else
		{
			U.emplace_back(L.data[i]);
		}
	}
}


int main()
{
	ElemType temp[10] = { 0,1,2,3,4,5,6,7,8,9 };
	SqList L(temp, 10);
	DeleteElem(L, 3, 5);
	//LList R(position::rear){ 1, 2, 3, 4, 5, 6, 7 };
	getchar();
	return 0;
}