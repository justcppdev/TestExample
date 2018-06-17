#pragma once
#include <iostream>
#include "ForwardListNode.h"
class ForwardList
{
private:
	ForwardListNode* head;
public:
	ForwardList();
	ForwardList(const char* value);
	~ForwardList();
	bool isEmpty();
	void addValue(const char* value);
	void showForwardList();
	ForwardListNode* findKey(const char* value);
	void deleteKey(const char* value);
};

