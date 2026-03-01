#include <iostream>

int main() {
	int a, b, c;

	std::cout << "Enter first integer: ";
	std::cin >> a;
	int* pA = new int (a);

	std::cout << "Enter second integer: ";
	std::cin >> b;
	int* pB = new int (b);

	std::cout << "Enter third integer: ";
	std::cin >> c;
	int* pC = new int (c);

	std::cout <<"\nVariable values:\n";
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";

	std::cout <<"\nPointer addresses:\n";
	std::cout << "pA = " << pA << ", pB = " << pB << ", pC = " << pC << "\n";

	std::cout <<"\nPointer contents (dynamic memory vals):\n";
	std::cout << "*pA = " << *pA << ", *pB = " << *pB << ", *pC = " << *pC << "\n";

	delete pA;
	delete pB;
	delete pC;

	pA = nullptr;
	pB = nullptr;
	pC = nullptr;

	return 0;
}
