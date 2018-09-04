#include <iostream>
#include <array>



int main() {
	std::array<int, 4> arr = { 1,56,18,7 };
	std::array<int, 4> arr2 = { 1,55,190,8 };

	bool result = (arr == arr2);
	std::cout << "(arr == arr2) = " << result << std::endl;

	result = (arr > arr2);
	std::cout << "(arr > arr2) = " << result << std::endl;

	system("pause");
	return 0;
}