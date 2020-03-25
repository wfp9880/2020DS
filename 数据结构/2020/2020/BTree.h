#pragma once
#include "DS.h"
using namespace DS;

class BTree
{
public:
private:
	typedef struct btree
	{
		ElemType data;
		struct btree *left, *right;
	}btree,*btreeptr;
	btree node;
};