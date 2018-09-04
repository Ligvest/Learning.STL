#include <iostream>
#include <set>

int main() {
	std::set<int> mySet;
	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(12);
	mySet.insert(4);
	mySet.insert(-1);

	std::cout << "Raw data: " << std::endl;
	for (auto el : mySet) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;


	auto it = mySet.find(10);

	std::cout << ".find(10):" << std::endl;
	if (mySet.end() == it) {
		std::cout << "Not found" << std::endl;
	}
	else {
		std::cout << "found" << std::endl;
	}



	std::cout << "After .erase(5): " << std::endl;
	
	auto result = mySet.erase(5);
	std::cout << "Result = " << result<<std::endl;
	for (auto el : mySet) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;


	std::cout << "After .erase(100): " << std::endl;
	result = mySet.erase(100);
	std::cout << "Result = " << result<<std::endl;
	for (auto el : mySet) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Multiset ************************** " << std::endl;


	std::multiset<int> myMultiset;
	myMultiset.insert(5);
	myMultiset.insert(1);
	myMultiset.insert(45);
	myMultiset.insert(12);
	myMultiset.insert(12);
	myMultiset.insert(12);
	myMultiset.insert(67);
	myMultiset.insert(4);
	myMultiset.insert(-1);

	std::cout << "Raw data: " << std::endl;
	for (auto el : myMultiset) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;

	auto val = myMultiset.lower_bound(12);
	std::cout << ".lower_bound(12) =  " << *val << std::endl;

	val = myMultiset.upper_bound(12);
	std::cout << ".upper_bound(12) =  " << *val << std::endl;

	auto arr = myMultiset.equal_range(12);
	std::cout << ".equal_range(12): {";






	system("pause");
	return 0;
}