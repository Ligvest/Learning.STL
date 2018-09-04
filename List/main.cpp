#include <iostream>

#include <list>

template <typename T>
void printList(const T &storage) {
	for (auto i = storage.cbegin(); i != storage.cend(); ++i) {
		std::cout << *i << ", ";
	}
	std::cout << std::endl;
}

int main(int nNumberOfArgs) {
	std::list<int> myList = {11, 13, 22, 0, 13, 13};
	myList.push_back(11);
	myList.push_front(24);
	myList.push_front(27);
	myList.push_front(2);
	myList.push_front(11);
	
	std::cout << "Raw data" << std::endl;	
	printList(myList);

	std::cout << "After .remove(13)" << std::endl;
	myList.remove(13);
	printList(myList);

	std::cout << "After .unique()" << std::endl;
	myList.unique();
	printList(myList);
	
	std::cout << "After .reverse()" << std::endl;
	myList.reverse();
	printList(myList);

	std::cout << "After .sort()" << std::endl;
	myList.sort();
	printList(myList);

	std::cout << "After .unique()" << std::endl;
	myList.unique();
	printList(myList);

	std::cout << "After std::advance(it, 3) and .insert(it, 7)" << std::endl;
	auto it = myList.begin();
	std::advance(it, 3);
	myList.insert(it, 7);
	printList(myList);

	std::cout << "After std::advance(it, 5) and .erease(it)" << std::endl;
	it = myList.begin();
	std::advance(it, 5);
	myList.erase(it);
	printList(myList);

	std::cout << "After .clear()" << std::endl;
	myList.clear();
	printList(myList);

	std::cout << "After .assign(4, 15)" << std::endl;
	myList.assign(4, 15);
	printList(myList);

	system("pause");
	return 0;
}