#include <iostream>
#include "max.hpp"
#include "min.hpp"
#include "swap.hpp"

int main() {
	int a = 42;
	int b = 21;

	std::cout << a << " " << b << ": " << min(a, b) << " < " << max(a, b) << std::endl;
	swap(a, b);
	std::cout << a << " " << b << ": " << min(a, b) << " < " << max(a, b) << std::endl;
}
