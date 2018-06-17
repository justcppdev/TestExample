#pragma once
class ForwardListNode
{
private:
	const char* key;
	ForwardListNode* next;
public:
	ForwardListNode();
	ForwardListNode(const char*);
	ForwardListNode* getNext() const { return next; }
	void setNext(ForwardListNode* elem) { this->next = elem; }
	const char* getKey() const { return key; }
	~ForwardListNode();
};

