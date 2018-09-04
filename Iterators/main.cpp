#include <vector>
#include <iostream>

int main(int iNumberOfArgs) {
	
	std::vector<int> myVector = {1,2,3,4,5};		

	std::cout << "Direct iterator" << std::endl;
	for (std::vector<int>::iterator i = myVector.begin();
		i != myVector.end(); ++i) {
		std::cout << *(i) << ", ";
	}
	std::cout << std::endl;

	std::cout << "Reversed iterator" << std::endl;
	for (std::vector<int>::reverse_iterator i = myVector.rbegin();
		i != myVector.rend(); ++i) {
		std::cout << *(i) << ", ";
	}
	std::cout << std::endl;
	
	std::cout << "Direct iterator with \"advance\"" << std::endl;
	for (std::vector<int>::iterator iter = myVector.begin();
		iter != myVector.end();
		//To do offset with step as 1
		std::advance(iter, 1) ) {		
		std::cout << *iter << ", ";
	}	
	std::cout << std::endl;

	//Insert(), Erase()
	std::vector<int>::iterator it = myVector.begin();
	std::advance(it, 1);
	it = myVector.insert(it, 24);
	std::cout << "After insert(it, 24)" << std::endl;
	for (std::vector<int>::iterator i = myVector.begin();
		i != myVector.end(); ++i) {
		std::cout << *i << ", ";
	}
	std::cout << std::endl;

	myVector.erase(it);
	std::cout << "After erase(it)" << std::endl;
	for (std::vector<int>::iterator i = myVector.begin();
		i != myVector.end(); ++i) {
		std::cout << *i << ", ";
	}
	std::cout << std::endl;

	myVector.erase(it+1, it+2);
	std::cout << "After erase(it+1, it+3)" << std::endl;
	for (std::vector<int>::iterator i = myVector.begin();
		i != myVector.end(); ++i) {
		std::cout << *i << ", ";
	}
	std::cout << std::endl;

	
	system("pause");
	return 0;
}
