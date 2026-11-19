#include <iostream>

int main()
{
	double a = 0.1, b = 0.2;
	std::cout <<"sum = "<< a + b << std::endl;
	std::cout << " Сумма равна 0.3? " << (a + b == 0.3) << std::endl; 

}
// Хвоста не видно так как в метод double не помещается всё число а только дробная часть 