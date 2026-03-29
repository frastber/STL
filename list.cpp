#include <iostream>
#include <list>

int main()
{
	std::list<int> numbers = { 1,4,3 };
	numbers.push_front(0);
	numbers.push_back(0);
	numbers.remove(4);

	for (int num : numbers)
		std::cout << num << std::endl;

	return 0;
}
