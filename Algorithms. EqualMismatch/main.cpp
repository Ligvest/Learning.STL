#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>


class Person {
public:
	Person(std::string sName, int iScore) {
		this->sName = sName;
		this->iScore = iScore;
	}

	bool operator () (const Person& p) {
		return p.iScore > 180;
	}

	int iScore;
	std::string sName;

};





template <typename T>
void show(const T&, std::string sToShow = ' ');

int main() {


	//int mismatch(,,) ****************
	int arr[] = { 10,9,22,4 };
	show(arr, "arr, Raw data:");
	int arr2[] = { 4,10,9,22, };
	show(arr2, "arr2, Raw data:");
	auto pair = std::mismatch(std::begin(arr), std::end(arr), std::begin(arr2), std::end(arr2));
	std::cout << "mismatch(arr, arr2).first: " << *pair.first << std::endl;
	std::cout << "mismatch(arr, arr2).second: " << *pair.second << std::endl;

	//int sort and equal(,,) ****************
	std::sort(std::begin(arr), std::end(arr));
	show(arr, "arr, Raw data:");
	std::sort(std::begin(arr2), std::end(arr2));
	show(arr2, "arr2, Raw data:");
	auto result = std::equal(std::begin(arr), std::end(arr), std::begin(arr2), std::end(arr2));
	std::cout << "equal(arr, arr2): " << result << std::endl;

	//people equal() ****************
	std::vector<Person> people{
		Person("Masha", 180),
		Person("Sasha", 190),
		Person("Petr", 170),
		Person("Nadya", 160),
		Person("Tolya", 280)
	};

	std::vector<Person> people2{
		Person("Masha", 280),
		Person("Sasha", 190),
		Person("Petr", 170),
		Person("Nadya", 160),
		Person("Tolya", 280)
	};

	result = std::equal(std::begin(people), std::end(people), std::begin(people2), std::end(people2), [](const Person& p1, const Person& p2) {
		return p1.iScore == p2.iScore;
	});
	std::cout << "equal(people, people2): " << result << std::endl;


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