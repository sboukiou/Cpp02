#ifndef FIXED_HPP
# define FIXED_HPP


#include <ostream>
class Fixed {
	private:
		int	value;
		static const int fractBits = 8;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const Fixed &other);
		Fixed(const float number);
		Fixed&	operator=(const Fixed& other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(const int val);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		// Overload the comparison operators
		bool	operator<(const Fixed &f) const;
		bool	operator>(const Fixed &f) const;
		bool	operator==(const Fixed &f) const;
		bool	operator<=(const Fixed &f) const;
		bool	operator>=(const Fixed &f) const;
		bool	operator!=(const Fixed &f) const;
		// Overload the arithmetic operators
		Fixed	operator+(const Fixed &f) const ;
		Fixed	operator-(const Fixed &f) const ;
		Fixed	operator*(const Fixed &f) const ;
		Fixed	operator/(const Fixed &f) const ;

		// Overload the inc/decrement opeartors
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed		&min(Fixed &x, Fixed &y);
        static const Fixed	&min(const Fixed &x, const Fixed &y);
        static Fixed		&max(Fixed &x, Fixed &y);
        static const Fixed	&max(const Fixed &x, const Fixed &y);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &f);


#endif /* FIXED_HPP */
