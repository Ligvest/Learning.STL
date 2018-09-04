#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

int main() {

	std::stack<int, std::vector<int>> st;

	st.push(2);
	st.push(18);
	st.push(9);
	st.emplace(13);	
	auto a = st._Get_container();
	
	std::cout << "Raw data:" << std::endl;
	for (auto el : a) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;

	std::cout << ".top() = " << st.top() << std::endl;

	system("pause");
	return 0;
}