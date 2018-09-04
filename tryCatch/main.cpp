#include <iostream>
#include <string>
#include <fstream>
#define BUFSIZE 128

void displayNumber(int iNum) {
	if (iNum < 0) {
		throw std::exception("Negative number is not allowed!");
	}
	std::cout << "Displayable variable = " << iNum << std::endl;
}

int main() {

	try
	{
		displayNumber(-5);
	} // 1 exception
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	} // 2 exception
	catch (char* exceptionString)
	{
		std::cout << exceptionString << std::endl;
	} // 3 exception
	catch (...)
	{
		std::cout << "Something went wrong" << std::endl;
	}



	system("pause");

	return 0;
}