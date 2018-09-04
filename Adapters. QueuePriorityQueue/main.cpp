#include <iostream>
#include <vector>
#include <list>
#include <deque>

#include <queue>

int main() {

	std::cout << "queue ******************** " << std::endl;
	std::queue<int, std::vector<int>> q;

	q.push(2);
	q.push(18);
	q.push(9);
	q.emplace(13);
	auto a = q._Get_container();

	std::cout << "Raw data:" << std::endl;
	for (auto el : a) {
		std::cout << el << ", ";
	}
	std::cout << std::endl;

	std::cout << ".front() = " << q.front() << std::endl;
	std::cout << ".back() = " << q.back() << std::endl;


	std::cout << "priority_queue ******************** " << std::endl;
	std::priority_queue<int, std::deque<int>> pq;

	pq.push(2);
	pq.push(18);
	pq.push(9);
	pq.emplace(13);	

	std::cout << "Raw data:" << std::endl;
	while (!pq.empty()) {
		std::cout << pq.top() << ", ";
		pq.pop();
	}
	std::cout << std::endl;


	system("pause");
	return 0;
}