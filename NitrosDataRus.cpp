#include "ForwardList.h"

int main()
{
	ForwardList* forward_list = new ForwardList();
	forward_list->addValue("first");
	forward_list->addValue("second");
	forward_list->addValue("third");
	forward_list->showForwardList();
	forward_list->addValue("fourth");
	forward_list->addValue("fifth");
	forward_list->showForwardList();
	forward_list->findKey("first");
	forward_list->findKey("fourth");
	forward_list->findKey("Fourth");
	forward_list->deleteKey("fifth");
	forward_list->addValue("fifth");
	forward_list->deleteKey("third");
	forward_list->showForwardList();

	ForwardList* forward_list2 = new ForwardList();
	forward_list2->addValue("first");
	forward_list2->deleteKey("first");
	forward_list2->deleteKey("first");
	forward_list2->showForwardList();
    return 0;
}

