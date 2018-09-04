#include <iostream>
#include <array>



int main() {
	std::array<int, 4> arr = {1,55,18,6};

	std::cout << "Rawa data:" << std::endl;
	for (auto el : arr) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << arr.at(5) << std::endl; //exception
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
	std::cout << "arr.size() = " << arr.size() << std::endl;

	std::cout << "After .fill(-1):" << std::endl;
	arr.fill(-1);
	for (auto el : arr) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;


	system("pause");
	return 0;
}