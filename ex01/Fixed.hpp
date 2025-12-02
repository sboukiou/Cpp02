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
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &f);

#endif /* FIXED_HPP */
