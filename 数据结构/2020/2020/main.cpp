#include "DS.h"
using namespace std;
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

int main()
{
	ElemType temp[10] = { 0,1,2,3,4,5,6,7,8,9 };
	SqList L(temp, 10);
	DeleteElem(L, 3, 5);
	getchar();
	return 0;
}