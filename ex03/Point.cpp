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
	/*Copy asssignment operator should have no effect*/
	/*	whatsover , ! The points are fixed , once created they remain*/
	/*	their value for the whole program lifetime*/
	return (*this);
}

Point::~Point() {
	/*Add some INFO debugger*/
}

/*Getters and Setters*/

const Fixed&	Point::getX(void) {
	return  (x);
}

const Fixed&	Point::getY(void) {
	return  (y);
}
