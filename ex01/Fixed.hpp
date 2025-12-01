#ifndef FIXED_HPP
# define FIXED_HPP


class Fixed {
	private:
		int	value;
		static const int fractBits = 8;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed&	operator=(const Fixed& other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(const int val);
		float	toFloat( void );
		int		toInt( void );
};


#endif /* FIXED_HPP */
