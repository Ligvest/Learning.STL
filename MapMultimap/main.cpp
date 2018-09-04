#include <iostream>
#include <string>
#include <map>

int main() {
	std::pair<int, std::string> p(1, "Xiaomi 5s");
	std::map<int, std::string> myMap;
	myMap.insert(p);
	myMap.insert(std::make_pair(3, "Siemens C65"));
	myMap.insert(std::pair<int, std::string>(4, "Nokia 2660"));
	myMap.emplace(5, "Motorolla C360");

	std::cout << "Raw data:" << std::endl;
	for (auto el : myMap) {
		std::cout << el.first << ", " << el.second << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << ".find(1):" << std::endl;
	auto it = myMap.find(1);
	if (it == myMap.end()) {
		std::cout << "not found" << std::endl;
	}
	else {
		std::cout << "found" << std::endl;
	}

	std::cout << "myMap[4]:" << myMap[4] << std::endl;	
	myMap[4] = "Xiaomi One";
	myMap[18] = "Sumsung Galaxy";


	std::cout << "After .erase(5):" << std::endl;
	myMap.erase(5);
	for (auto el : myMap) {
		std::cout << el.first << ", " << el.second << std::endl;
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}