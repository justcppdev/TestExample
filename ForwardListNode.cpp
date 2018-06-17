#include "ForwardListNode.h"

ForwardListNode::ForwardListNode() {
	key = "";
	next = nullptr;
}

ForwardListNode::ForwardListNode(const char* value) {
	key = value;
}

ForwardListNode::~ForwardListNode() {
}


