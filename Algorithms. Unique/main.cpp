#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>


template <typename T>
void show(const T&, std::string sToShow = ' ');

int main() {


	//int unique(,,) ****************
	int arr[] = { 9,10,9,22,22,4 };
	show(arr, "Raw data:");
	std::sort(std::begin(arr), std::end(arr));
	show(arr, "After sort:");
	auto it = std::unique(std::begin(arr), std::end(arr));
	show(arr, "After unique:");

	std::for_each(std::begin(arr), it, [](int a) { std::cout << a << ','; });
	std::cout << std::endl;

	//int unique_copy ****************
	std::vector<int> v = { 9,9,10,22,22,4 };
	std::vector<int> v2;
	std::unique_copy(std::begin(v), std::end(v), std::back_inserter(v2));
	show(v, "v:");
	show(v2, "v2:");


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