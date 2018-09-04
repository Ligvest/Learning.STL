#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <ctime>


class IAction {
public:
	virtual void action() = 0;
};

class CatAction : public IAction{
public:
	virtual void action() override {
		std::cout << "caressing a cat" << std::endl;
	}
};

class TeaAction : public IAction {
public:
	virtual void action() override {
		std::cout << "Drinking a tea" << std::endl;
	}
};

class KeyboardAction : public IAction {
public:
	virtual void action() override{
		std::cout << "pressing a button" << std::endl;
	}
};


template <typename T>
void show(const T&, std::string sToShow = ' ');

int main() {
	std::srand(time(NULL));

	//int random_shuffle ****************
	std::vector<int> v = { 4, 6, 12, 44, 5, 6, 3, 0, 64 };
	show(v, "v, Raw data:");
	std::random_shuffle(std::begin(v), std::end(v));
	show(v, "v, After random_shuffle:");	

	//IAction random_shuffle ****************
	std::vector<IAction*> av = { &CatAction(), &TeaAction(), &KeyboardAction() };
	std::cout << "Raw order:"<<std::endl;
	std::for_each(std::begin(av), std::end(av), [](IAction* a) { a->action(); });
	std::cout << "After shuffle:"<<std::endl;
	std::random_shuffle(std::begin(av), std::end(av));
	std::for_each(std::begin(av), std::end(av), [](IAction* a) { a->action(); });

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