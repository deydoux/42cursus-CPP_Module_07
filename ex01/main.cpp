#include <iostream>
#include "iter.hpp"

void print(int i) {
	std::cout << i << std::endl;
}

int main() {
	const int fib[] = {0, 1, 2, 3, 5, 8, 13, 21, 34, 55};
	iter(fib, 10, print);
}
