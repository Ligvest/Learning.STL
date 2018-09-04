#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


template <typename T>
void show(const T&, std::string sToShow = ' ');

int main() {


	//int max_element ****************
	std::vector<int> v = { 4, 6, 12, 44, 5, 6, 3, 0, 64 };
	show(v, "v, Raw data:");
	auto res = std::max_element(v.begin(), v.end());
	std::cout << "max_element = " << *res << std::endl;

	//int min_element ****************
	res = std::min_element(v.begin(), v.end());
	std::cout << "min_element = " << *res << std::endl;

	//int minmax_element ****************
	auto a = std::minmax_element(v.begin(), v.end());
	std::cout << "min_element = " << *a.first << " max_element = " << *a.second << std::endl;



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