#include "DS.h"
using namespace std;
using namespace DS::List;

void DeleteElem(SqList& L, const int& i, const int& j)
{
	L.Print();
	//ɾ���±�i~j������Ԫ��
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
	L.Printf("ɾ���±�%d��%d֮���Ԫ�غ��б�Ϊ: ", i, j);
}

int main()
{
	ElemType temp[10] = { 0,1,2,3,4,5,6,7,8,9 };
	SqList L(temp, 10);
	DeleteElem(L, 3, 5);
	getchar();
	return 0;
}