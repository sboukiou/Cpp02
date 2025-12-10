#include  "./Fixed.hpp"


class Point {
	private:
		const Fixed	x;
		const Fixed	y;
		/*Add Other needed DSs here*/
	public:
		Point();
		Point(const float fX, const float fY);
		Point(const Point &p);
		Point&	operator=(const Point& other);
		~Point();
};
