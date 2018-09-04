#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


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

bool myPred(int a, int b) {
	return a > b;
}

int main() {
	
	std::vector<Person> people{
		Person("Masha", 180),
		Person("Sasha", 190),
		Person("Petr", 170),
		Person("Nadya", 160),
		Person("Tolya", 280)
	};
	
	std::cout << "people, Raw data: " << std::endl;
	for (auto el : people) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}
	std::sort(people.begin(), people.end(), [](Person &p1, Person &p2) {
		return p1.iScore > p2.iScore;
	});
	std::cout << "people, After sort(): " << std::endl;
	for (auto el : people) {
		std::cout << "Name: " << el.sName << "\t Score: " << el.iScore << std::endl;
	}





	std::vector<int> v = {4, 6, 12, 44, 5, 3, 0, 64};	
	show(v, "v, Raw data:");
	std::sort(v.begin(), v.end(), [](int a, int b) {return a > b; });
	show(v, "v, After sort(,,<lambda>):");


	const size_t size = 7;
	int arr[size] = { 41, 0, 45, 11, 2, 3, 6 };
	show(arr, "arr, Raw data:");
	std::sort(arr, arr+size, [](int a, int b) {return a > b; });
	show(arr, "arr, After sort(,,<lambda>):");

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