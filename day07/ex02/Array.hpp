#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template< typename T>
class Array 
{
    private :
        size_t _length;
        T *_arr;
    public :
        Array();
        Array(unsigned  int n);
        Array(Array<T> const &other);
        virtual ~Array();

	    class OutOfRange: public std::exception {
            public :
            OutOfRange () throw() {} ;
            OutOfRange (const OutOfRange&) throw() {} ;
            OutOfRange& operator= (const OutOfRange&) throw() {} ;
            virtual ~OutOfRange() throw() {} ;
            virtual const char* what() const throw() { return "ArrayException: index out of range"; };
        };
        Array &operator=(Array const &other);
        T &operator[](unsigned int index);
        T const &operator[](unsigned int index) const;

        unsigned int size(void) const;
};

template<typename T>
Array<T>::Array():
	_length(0), _arr(nullptr)
{
}

template<typename T>
Array<T>::Array(unsigned int n):
	_length(n), _arr(nullptr)
{
	this->_arr = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &other):
	_length(0), _arr(nullptr)
{
	if (other._length > 0)
	{
		this->_arr = new T[other._length]();
		for (size_t i = 0; i < other._length; i++)
			this->_arr[i] = other._arr[i];
	}
	this->_length = other._length;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_length > 0)
		delete[] this->_arr;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if (this->_length > 0)
		delete[] this->_arr;
	this->_arr = nullptr;
	if (other._length > 0)
	{
		this->_arr = new T[other._length]();
		for (size_t i = 0; i < other._length; i++)
			this->_arr[i] = other._arr[i];
	}
	this->_length = other._length;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index > this->_length)
		throw Array::OutOfRange();
	return (this->_arr[index]);
}

template<typename T>
T const &Array<T>::operator[](unsigned int index) const
{
	return (operator[](index));
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_length);
}

#endif