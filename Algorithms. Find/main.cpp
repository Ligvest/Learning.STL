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

	//Person, find_if ****************
	std::cout << "people, Raw data: " << std::endl;
	for (auto el : people) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}
	std::cout << "find_if(,, p.iScore > 180;)" << std::endl;
	auto it_p = std::find_if(people.begin(), people.end(), [](const Person& p) { return p.iScore > 180; });
	if (it_p == people.end()) {
		std::cout << "not found: it_p = v.end()" << std::endl;
	}
	else {
		std::cout << "found: Name: " << it_p->sName << "\t Score : " << it_p->iScore << std::endl;
	}




	//int find ****************
	std::vector<int> v = { 4, 6, 12, 44, 5, 3, 0, 64 };
	show(v, "v, Raw data:");
	auto it = std::find(v.begin(), v.end(), 12);
	std::cout << "find(,,12)" << std::endl;
	if (it == v.end()) {
		std::cout << "not found: it =  v.end()" << std::endl;
	}
	else {
		std::cout << "found: it =  " << *it << std::endl;
	}


	//int find_if ****************
	it = std::find_if(v.begin(), v.end(), [](int a) { return (a % 2) == 0; });
	std::cout << "find_if(,, (a % 2) == 0;)" << std::endl;
	if (it == v.end()) {
		std::cout << "not found: it =  v.end()" << std::endl;
	}
	else {
		std::cout << "found: it =  " << *it << std::endl;
	}


	//int find_if_not ****************
	it = std::find_if_not(v.begin(), v.end(), [](int a) { return (a % 2) == 0; });
	std::cout << "find_if_not(,, (a % 2) == 0;)" << std::endl;
	if (it == v.end()) {
		std::cout << "not found: it =  v.end()" << std::endl;
	}
	else {
		std::cout << "found: it =  " << *it << std::endl;
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