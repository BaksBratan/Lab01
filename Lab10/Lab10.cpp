#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int r;
	float sum;
	float sum1;
	std::cout << "enter your radius\n";
	std::cin >> r;
	sum = 4 * (pow(r, 2)) * 3.141592;
	sum1 = (4 * (pow(r, 3)) * 3.141592) / 3;
	std::cout << "area:" << sum << std::endl;
	std::cout << "volume:" << sum1 << std::endl;

	float speed = (299792 * 60 * 60) * 1;
	float speed1 = (299792 * 60 * 60 * 24);  //Нагадати викладачу, що швидкість світла 299792!!!
	std::cout << "per hour:" << speed << std::endl;
	std::cout << "per day:" << speed1 << std::endl;

}