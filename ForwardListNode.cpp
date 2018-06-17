#include "ForwardListNode.h"

ForwardListNode::ForwardListNode(const char * value)
: next( nullptr )
{
	auto length = strlen( value );
	key = new char[ length + 1 ];
	strncpy( key, value, length );
	key[ length ] = '\0';
}

ForwardListNode::~ForwardListNode() 
{
	delete [] value;
}
