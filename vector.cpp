#include <iostream>
#include "Header.h"
int main(){
	Vector vec;
	vec.push_back(5);
	vec.push_back(6);
	vec.print();
	vec.pop_back();
	vec.print();
	vec.size_m();
	vec.isempty();
	vec.at(0);
	vec.insert(10,0);
	vec.print();
	
	std::cout<<vec.front();
	std::cout<<vec.back();
}
