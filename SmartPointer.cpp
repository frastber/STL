#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class SmartPointer
{
public:
	SmartPointer(T* ptr)
	{
		this->ptr = ptr;
	}

	~SmartPointer() {
		delete ptr;
	}

	T& operator*()
	{
		return *ptr;
	}

private:
	T* ptr;
};

int main()
{
	setlocale(0, "");

	SmartPointer<int> sptr = new int(4);
	cout << *sptr << endl;


	return 0;
}
