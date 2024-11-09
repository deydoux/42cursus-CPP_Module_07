#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array {
private:
	unsigned int _size;
	T *_elements;
public:
	Array();
	Array(unsigned int size);
	Array(const Array &other);
	~Array();
	Array &operator=(const Array &rhs);
	T &operator[](unsigned int idx) const;
	unsigned int size() const;

	class OutOfBoundsException: public std::exception {
	public:
		const char *what() const throw();
	};
};

#endif
