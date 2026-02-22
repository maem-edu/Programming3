#include <iostream>
#include <string>

int main() {
int i = 0;
	while (i <3) {
		std::string s1, s2, combo;
		std::cout << "Enter first string: ";
		std::getline(std::cin, s1);

		std::cout << "Enter second string: ";
		std::getline(std::cin, s2);

		combo = s1 + " " + s2;
		std::cout << "Combined: " << combo <<"\n";
		i++;
	}
	return 0;
}
