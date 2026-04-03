#include <iostream>
#include <deque>

int main() {
	std::deque<int>numbers{ 2,3,4 };
	numbers.push_back(1);
	numbers.push_front(8);

	std::cout << numbers.front() << std::endl;
	std::cout << numbers.back() << std::endl;

	numbers.pop_front();

	for (int num : numbers)
		std::cout << num << "  ";

	return 0;
}
