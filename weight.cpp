#include <iostream>

int main()
{
	int number;
	std::cout << "vedite ves v fyntax = " << std::endl;
	std::cin >> number;
	double kg = number * 0.453592;
	std::cout << "ves v fyntax - " << number << std::endl;
	std::cout << "ves v kg - " << kg << std::endl;
	int number2;
	std::cout << "vedite rost v duim - " << std::endl;
	std::cin >> number2;
	double sm = number2 * 2.54;
	std::cout << "rost v duim - " << number2 << std::endl;
	std::cout << "rost v sm - " << sm << std::endl;



}