#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers{ 1,3,4 };
	numbers.push_back(6);

	std::cout << "The second element: " << numbers[1] << std::endl;

	return 0;
}
