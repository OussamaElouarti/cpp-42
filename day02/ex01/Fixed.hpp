#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <tgmath.h>
 
class Fixed
{

	public:

		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed( Fixed const & src );
		~Fixed();
		float toFloat( void ) const;
		int   toInt( void ) const;
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		Fixed &		operator=( Fixed const & rhs );

	private:
		int _value;
		static const int _fractionalBit = 8;
		
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */