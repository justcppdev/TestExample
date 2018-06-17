struct ForwardListNode
{
	const char * key;
	ForwardListNode * next;

	ForwardListNode(const char * _key = "");
	~ForwardListNode();

	ForwardListNode(ForwardListNode const &) = delete;
	ForwardListNode & operator=(ForwardListNode const &) = delete;
	ForwardListNode(ForwardListNode &&) = delete;
	ForwardListNode & operator=(ForwardListNode &&) = delete;
};

