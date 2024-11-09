#include "Array.tpp"

int main() {
	Array<int> fib(10);

	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 2;
	fib[3] = 3;
	fib[4] = 5;
	fib[5] = 8;
	fib[6] = 13;
	fib[7] = 21;
	fib[8] = 34;
	fib[9] = 55;

	try {
		fib[10] = -1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	for (unsigned int i = 0; i <= fib.size(); i++)
		try {
			std::cout << fib[i] << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
}
