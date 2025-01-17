#ifndef SWAP_HPP
#define SWAP_HPP

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
void swap(T *a, T *b) {
	::swap(*a, *b);
}

#endif
