#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>


template <typename T>
void show(const T&, std::string sToShow = ' ');

int main() {


	//int for_each(,,) ****************
	int arr[] = { 10,9,22,4 };
	std::for_each(std::begin(arr), std::end(arr), [](const int& a) {
		std::cout << a << std::endl;
	});


	system("pause");
	return 0;
}

template <typename T>
void show(const T& container, std::string sToShow) {
	std::cout << sToShow << std::endl;
	for (auto el : container) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;
}