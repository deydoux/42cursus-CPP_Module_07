#include "Array.hpp"

template <typename T>
Array<T>::Array(): _size(0), _elements(new T[_size]) {
	std::cerr << "Default Array constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size): _size(size), _elements(new T[_size]) {
	std::cerr << "Parametric Array constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &other): _size(other._size), _elements(new T[_size]) {
	std::cerr << "Array copy constructor called" << std::endl;
	for (unsigned int i = 0; i < _size; i++)
		_elements[i] = other._elements[i];
}

template <typename T>
Array<T>::~Array() {
	std::cerr << "Array destructor called" << std::endl;
	delete [] _elements;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs) {
	_size = rhs._size;
	delete _elements;
	_elements = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_elements[i] = rhs._elements[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int idx) const {
	if (idx >= _size)
		throw (std::out_of_range("Out of bounds index"));
	return (_elements[idx]);
}

template <typename T>
unsigned int Array<T>::size() const {
	return (_size);
}
