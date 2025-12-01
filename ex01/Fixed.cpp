#include "./Fixed.hpp"
#include <cmath>
#include <iostream>


Fixed::Fixed(): value(0) {
	std::cout << "Default contructor called\n";
}

Fixed::Fixed(const int number) {
	value = number << fractBits;
	std::cout << "Copy contructor for int  called\n";
}

Fixed::Fixed(const float number) {
	value = (int)(roundf(number * (1 << fractBits)));
	std::cout << "Copy contructor for float called\n";
}

Fixed&	Fixed::operator=(const Fixed& other) {
	std::cout << "Copy Assignment operator contructor called\n";
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (value);
}

void	Fixed::setRawBits(const int val) {
	value = val;
}

float	Fixed::toFloat( void ) {
	float	val;

	val = (float)value / (1 << fractBits);
	return (val);
}


int	Fixed::toInt( void ) {
	int	val;

	val = value >> fractBits;
	return (val);
}


std::ostream	&operator<<(std::ostream &stream, Fixed &number)
{
	stream << number.toFloat();
	return (stream);
}
