#include "./Fixed.hpp"
#include "./Point.hpp"

Point::Point(void): x(0) , y(0) {
 }

Point::Point(const float fX, const float fY): x(Fixed(fX)), y(Fixed(fY)){
	/*Assign the value in fX to the x*/
	/*Assign the value in fY to the y*/
}

Point::Point(const Point &other): x(other.x), y(other.y) {
	/*Assign the values X and Y from the other*/
	/*	class object properly*/
}


Point&	Point::operator=(const Point& other) {
	if (&other == this)
		return (*this);
	/*Copy asssignment operator implement here*/
	return (*this);
}

Point::~Point() {
	/*Add some INFO debugger*/
}
