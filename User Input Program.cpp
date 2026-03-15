#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iterator>

int main() {
	const std::string inFile = "CSC450_CT5_mod5.txt";
	const std::string outFile = "CSC450-mod5-reverse.txt";

	//get input
	std::cout << "Enter text to append: \n";
	std::string line;
	std::getline(std::cin, line);

	//append input to file
	std::ofstream append(inFile, std::ios::app);
	append << line << "\n";
	append.close(); //ensures next read sees new line

	//read file, reverse, and save as new
	std::ifstream in (inFile, std::ios::binary);
	std::string content((std::istreambuf_iterator<char>(in)),
						std::istreambuf_iterator<char>());
	std::reverse (content.begin(), content.end());

	std::ofstream out(outFile, std::ios::binary);
	out << content;

	return 0;
}
