#include "ForwardList.h"

ForwardList::ForwardList() {
	head = nullptr;
}

ForwardList::ForwardList(const char* value){
	head = new ForwardListNode(value);
}

ForwardList::~ForwardList() {

}

bool ForwardList::isEmpty() {
	return head == nullptr;
}

void ForwardList::addValue(const char* value) {
	if (isEmpty()) {
		head = new ForwardListNode(value);
		return;
	}
	ForwardListNode* temp = head;
	while (temp->getNext() != nullptr) {
		temp = temp->getNext();
	}
	ForwardListNode* current = new ForwardListNode(value);
	temp->setNext(current);
}

void ForwardList::showForwardList() {
	if (isEmpty()) {
		std::cout << "Forward list doesn't have elements" << std::endl;
		return;
	}
	ForwardListNode* temp = head;
	while (temp->getNext() != nullptr) {
		std::cout << temp->getKey() << ' ';
		temp = temp->getNext();
	}
	std::cout << temp->getKey();
	std::cout << std::endl;
}

ForwardListNode* ForwardList::findKey(const char * value) {
	if (this->isEmpty()) {
		std::cout << "Forward list doesn't have elements" << std::endl;
		return nullptr;
	}
	ForwardListNode* temp = head;
	if (temp->getKey() == value) {
		std::cout << "We find " << value << std::endl;
		return temp;
	}
	while (temp->getNext() != nullptr) {
		temp = temp->getNext();
		if (temp->getKey() == value) {
			std::cout << "We find " << value << std::endl;
			return temp;
		}
	}
	return nullptr;
}

void ForwardList::deleteKey(const char * value) {
	if (this->isEmpty()) {
		std::cout << "Forward list doesn't have elements" << std::endl;
		return;
	}
	if (head->getNext() == nullptr && head->getKey() == value) {
		delete head;
		head = nullptr;
		std::cout << "Element " << value << " is deleted" << std::endl;
		return;
	}
	ForwardListNode* previous = head;
	ForwardListNode* for_deleting = this->findKey(value);
	if (for_deleting != nullptr && for_deleting->getNext() != nullptr) {
		while (previous->getNext() != for_deleting) {
			previous = previous->getNext();
		}
		previous->setNext(for_deleting->getNext());
		delete for_deleting;
		std::cout << "Element " << value << " is deleted" << std::endl;
		return;
	}
	else if (for_deleting != nullptr && for_deleting->getNext() == nullptr) {
		while (previous->getNext() != for_deleting) {
			previous = previous->getNext();
		}
		previous->setNext(nullptr);
		delete for_deleting;
		std::cout << "Element " << value << " is deleted" << std::endl;
		return;
	}
	else {
		std::cout << "Element wasn't found" << std::endl;
	}
}
