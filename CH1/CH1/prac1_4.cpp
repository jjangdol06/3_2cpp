#include <iostream>

int main() {

	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < i + 1; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
}