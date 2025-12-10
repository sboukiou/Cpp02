#include "./Point.hpp"
#include <iostream>
int main( void ) {
	Point A(0, 0);
	Point B(4, 0);
	Point C(0, 4);
	Point P(2, 2);

	std::cout << (bsp(A, B, C, P) ? "true" : "false")  << "\n";
	A = Point(0, 0);
	B = Point(4, 0);
	C = Point(0, 4);
	P = Point(12, 12);
	std::cout << (bsp(A, B, C, P) ? "true" : "false")  << "\n";
	A = Point(0, 0);
	B = Point(4, 0);
	C = Point(0, 4);
	P = Point(0, 0);
	std::cout << (bsp(A, B, C, P) ? "true" : "false")  << "\n";
	A = Point(0, 0);
	B = Point(4, 0);
	C = Point(0, 4);
	P = Point(-10, 12);
	std::cout << (bsp(A, B, C, P) ? "true" : "false")  << "\n";
	return 0;
}
