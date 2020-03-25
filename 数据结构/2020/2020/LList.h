#pragma once
#include <stdarg.h>
#include <initializer_list>
/************************************************************************/
/*µ¥Á´±í                                                                */      
/************************************************************************/

enum position : char
{
	head=0,
	rear,
	count
};

class LList
{
	typedef struct LNode
	{
		int data;
		struct LNode* next{nullptr};
	}LNode,*LinkList;
public:
	LList(const position& p,std::initializer_list<int> list);
	inline bool ElemType()
	{
		return mHead->next == nullptr;
	}
private:
	LinkList mHead;
};