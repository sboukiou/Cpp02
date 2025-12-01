#ifndef FIXED_HPP
# define FIXED_HPP


class Fixed {
	private:
		int	value;
		static const int fractBits = 8;
	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(const int val);
};


#endif /* FIXED_HPP */
