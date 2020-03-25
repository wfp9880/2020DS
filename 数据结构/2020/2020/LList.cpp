#include "LList.h"
#include <iostream>
#include <string>


LList::LList(const position& p,std::initializer_list<int> list)
{
	LinkList s, r = mHead;
	if (p == position::head)
	{
		mHead = (LinkList)malloc(sizeof(LNode));
		mHead->next = nullptr;
		for (auto item : list)
		{
			s = (LinkList)malloc(sizeof(LNode));
			s->data = item;
			s->next = mHead->next;
			mHead->next = s;
		}
	}
	else if (p == position::rear)
	{
		for (auto item : list)
		{
			s = (LinkList)malloc(sizeof(LNode));
			s->data = item;
			r->next = s;
			r = s;
		}
		r->next = nullptr;
	}
	else
	{
		std::cout << "position error!" << std::endl;
	}
}
