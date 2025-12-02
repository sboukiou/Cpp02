#include "./Fixed.hpp"
#include <cmath>
#include <iostream>

# define FIX_FACTOR(a) (1 << a)

Fixed::Fixed(): value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other) {
	value = other.getRawBits();
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(const int number) {
	value = number << fractBits;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float number) {
	value = (int)(roundf(number * (FIX_FACTOR(fractBits))));
	std::cout << "Float constructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& other) {
	std::cout << "Copy Assignment operator called\n";
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const {
	return (value);
}

void	Fixed::setRawBits(const int val) {
	value = val;
}

float	Fixed::toFloat( void ) const{
	float	val;

	val = (float)value / (FIX_FACTOR(fractBits));
	return (val);
}


int	Fixed::toInt( void ) const {
	int	val;

	val = (int)(value >> fractBits);
	return (val);
}


std::ostream	&operator<<(std::ostream &stream, const Fixed &f)
{
	stream << f.toFloat();
	return (stream);
}
