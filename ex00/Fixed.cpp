#include "./Fixed.hpp"
#include <iostream>


Fixed::Fixed(): value(0) {
	std::cout << "Default contructor called\n";
}

Fixed::Fixed(const Fixed& other) {
	value = other.value;
	std::cout << "Copy contructor called\n";
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
