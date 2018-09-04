#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>


template <typename T>
void show(const T&, std::string sToShow = ' ');

int main() {


	//int accumulate(,,) ****************
	std::vector<int> v = { 4, 5, 6, 3 };
	show(v, "v, Raw data:");
	auto sum = std::accumulate(v.begin(), v.end(), 0);
	std::cout << "accumulate(,,0) = " << sum << std::endl;

	//int accumulate(,,,) ****************
	show(v, "v, Raw data:");
	sum = std::accumulate(v.begin(), v.end(), 1, [](int a, int b) {return a * b; });
	std::cout << "accumulate(,,1,a * b) = " << sum << std::endl;

	//int accumulate(,,,) ****************
	show(v, "v, Raw data:");
	sum = std::accumulate(v.begin(), v.end(), 1, [](int a, int b) {
		if (b % 2 == 0)
		{
			return a*b;
		}
		else {
			return a;
		}
	});
	std::cout << "accumulate(,,1,if (b % 2 == 0) return a*b;) = " << sum << std::endl;



	//string accumulate(,,,) ****************
	show(v, "v, Raw data:");
	auto res = std::accumulate(std::next(v.begin()), v.end(), std::to_string(v.front()), [](std::string a, int b) {
		return a + '-' + std::to_string(b);
	});
	std::cout << "accumulate(,,1,if (b % 2 == 0) return a*b;) = " << res << std::endl;


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