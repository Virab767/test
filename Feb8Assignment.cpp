#include <iostream>
double area(double radius) {
	if (radius >= 0) {
		return 3.14 * radius * radius;
	}
}
double area(double width, double height, char type) {
	if (width >= 0 && height >= 0) {
		return width * height;
	}
	std::cout << type<<" ";
}
double area(double base, double height) {
	if (base >= 0 && height >= 0) {
		return 0.5 * base * height;
	}
}
double area(int side) {
	if (side >= 0) {
		return side * side;
	}
}
int main() {
	int choice;
	std::cout << "Select a shape:\n";
	std::cout << "1. Circle\n";
	std::cout << "2. Rectangle\n";
	std::cout << "3. Triangle\n";
	std::cout << "4. Square\n";
	std::cout << "Enter choice: ";
	std::cin >> choice;
	if (choice == 1) {
		std::cout << area(3.5) << "  Circle";
	}
	if (choice == 2) {
		std::cout << area(2.5, 4.5, 'r') << "  Rectangle";
	}
	if (choice == 3) {
		std::cout << area(1.5, 3, 2) << "   Triangle";
	}
	if (choice == 4) {
		std::cout << area(4) <<  "   Square";
	}

}
