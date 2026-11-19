#include <iostream>

int main()
{
	int number;
	std::cout << " vedite temperatyry - " << std::endl;
	double celsius;
	std::cin >> celsius;
	std::cout <<"Celsius - " << celsius * 9 / 5 + 32 << std::endl;
	double Fahrenheit;
	std::cin >> Fahrenheit;
	std::cout << "Fahrenheit - " << (Fahrenheit - 32) * 5 / 9 << std::endl;

}