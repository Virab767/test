
#ifndef VECTOR
#define VECTOR
#include <iostream>
class Vector {
private:
	int* data;
	size_t size;
	size_t capacity;
	void resize();
public:
	Vector();
	~Vector();
	void push_back(int value);
	void pop_back();
	int at(int index) const;
	size_t size_m() const;
	bool isempty() const;
	void print() const;
	void insert(size_t value,int index) const;
	size_t Operator(int index) const;
	size_t front() const;
	size_t back() const;
};

#endif

