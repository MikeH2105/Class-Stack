#pragma once
#include <iostream>

class Stack
{
private:
	int* arr;
	int max;
	int index; //������� �������
public:
	Stack(int);
	~Stack();
	bool push(int n);
	int pop();

	bool isEmpty();
	bool isFull();
};


