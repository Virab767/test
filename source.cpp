#include "Header.h"
#include <iostream>
Vector::Vector() {
	capacity = 5;
	size = 0;
	data = new int[capacity];
}

Vector::~Vector() {
	delete[] data;
}
void Vector::push_back(int value) {
	if (size == capacity) {
		resize();
	}
	data[size++] = value;
}
void Vector::pop_back() {
	if (size > 0) {
		size--;
	}
}
int Vector::at(int index) const {
	if (index >= 0 && index <= size) {
		return data[index];
	}
}
size_t Vector::size_m() const {
	return size;
}
bool Vector::isempty() const {
	if (size == 0) {
		return true;
	}
	else {
		return false;
	}
}
void Vector::resize() {
	capacity *= 2;
	int* newdata = new int[capacity];
	for (int i = 0; i < size; i++) {
		newdata[i] = data[i];
	}
	delete[]data;
	data = newdata;
}
void Vector::print() const {
	for (size_t i = 0; i < size; i++) {
		std::cout << data[i] << " ";
	}
}

void Vector::insert(size_t value, int index) const{
	if (index <= size) {
		data[index] = value;
	}
	else {
		std::cout << "invalid index";
	}
}

size_t Vector::Operator(int index) const{
	if (index <= size) {
		return data[index];
	}
	else {
		std::cout << "invalid index";
	}

}

size_t Vector::front() const{
	if (size >= 0) {
		return data[0];
	}
}

size_t Vector::back() const{
	if (size >= 0) {
		return data[size];
	}
}
