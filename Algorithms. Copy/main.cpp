#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>

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

	std::vector<Person> people{
		Person("Masha", 180),
		Person("Sasha", 190),
		Person("Petr", 170),
		Person("Nadya", 160),
		Person("Tolya", 280)
	};

	std::vector<Person> result;


	//Person, copy ****************
	std::cout << "result, Raw data: " << std::endl;
	for (auto el : result) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}
	std::cout << "After copy(,,):" << std::endl;
	std::copy(people.begin(), people.end(), std::back_inserter(result));
	for (auto el : result) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}

	//Person, find_if ****************
	std::cout << "people, Raw data: " << std::endl;
	for (auto el : people) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}
	std::cout << "After copy_if(,,,p.iScore > 180):" << std::endl;
	result.clear();
	std::copy_if(people.begin(), people.end(), std::back_inserter(result), [](const Person& p) { return p.iScore > 180; });
	for (auto el : result) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}

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