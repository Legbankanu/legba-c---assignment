#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int legby;
	
	cout << "Enter integer: ";
	cin >> legby;
	
	if (legby % 2 == 0)
	cout << "The integer is even: ";
	if (legby % 2 == 1)
	cout << "The integer is odd: ";
	
	return 0;
	system("PAUSE");
	return 'EXIT_SUCCESS';
}
