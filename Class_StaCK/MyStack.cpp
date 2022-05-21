#include "MyStack.h"

Stack::Stack(int size) {
	max = 1000;
	index = 0;
	if (size > max) {
		std::cout << "size > maxSize" << std::endl;
	}
	else {
		this->max = size;
		this->arr = new int[size];
	}
}


Stack::~Stack() {
	delete[] arr;
}


bool Stack::push(int n)
{

	if (index >= max) {
		return false;
	}
	else {
		arr[index] = n;
		index++;

		return true;
	}
}

int Stack::pop()
{
	if (index < 0) {
		return -1;
	}
	else {

		return arr[--index];
	}
}


bool Stack::isEmpty()
{
	if (index <= 0) {
		return true;
	}
	return false;
}

bool Stack::isFull()
{
	if (index == max) {
		return true;
	}
	return false;
}
