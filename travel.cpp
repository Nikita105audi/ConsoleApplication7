#include <iostream>

int main()
{
	int km;
	double tm;
	std::cout << "Введите растояние в киллометрах - " << std::endl;
	std::cin >> km;
	std::cout << "Введите время - " << std::endl;
	std::cin >> tm;
	double speed = km / tm;
	std::cout << "Растояние и время - " << km << " " << tm << std::endl;
	std::cout << "speed - " << speed << std::endl;
	

}