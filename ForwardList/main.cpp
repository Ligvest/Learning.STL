#include <iostream>
#include <forward_list>

int main() {

	std::forward_list<int> fl = {131, 12, 44};
	fl.push_front(18);
	fl.push_front(54);

	std::cout << "Raw list:" << std::endl;
	for (auto el : fl) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;


	std::forward_list<int>::iterator it = fl.begin();

	std::cout << "Insert " << 100 << " after " << *it << std::endl;
	fl.insert_after(it, 100);
	
	++it;
	++it;

	std::cout << "Erase after " << *it << std::endl;
	fl.erase_after(it);


	for (auto el : fl) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}