#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

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

	//Person, remove_if ****************
	std::cout << "people, Raw data: " << std::endl;
	for (auto el : people) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}
	std::cout << "After remove_if(,, p.iScore > 180;)" << std::endl;
	auto it_p = std::remove_if(people.begin(), people.end(), [](const Person& p) { return p.iScore > 180; });
	for (auto el : people) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}
	std::cout << "After erase" << std::endl;
	people.erase(it_p, people.end());
	for (auto el : people) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}


	//int remove ****************
	std::vector<int> v = { 4, 6, 12, 44, 5, 6, 3, 0, 64 };
	show(v, "v, Raw data:");
	auto toRem = std::remove(v.begin(), v.end(), 6);
	show(v, "After remove(, , 6)");
	v.erase(toRem, v.end());
	show(v, "After erase");




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