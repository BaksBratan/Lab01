#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Введення номера варіанта
    int j;

    std::cout << "Enter the option number: ";
    std::cin >> j;

    // Координати вершин трикутника
    double Ax = 0, Ay = 0;
    double Bx = j, By = j - 1;
    double Cx = -j, Cy = j + 1;

    // Обчислення координат точок Mb та Wc
    double Mbx = (Ax + Bx) / 2, Mby = (Ay + By) / 2;  // Координати точки Mb - середини відрізка AB (медіани)
    double Wcx = (Ax + Bx + Cx) / 3, Wcy = (Ay + By + Cy) / 3;  // Координати точки Wc - центру мас трикутника (для обчислення бісекриси)

    // Виведення результатів
    std::cout << "Point coordinates Mb (medians): (" << Mbx << ", " << Mby << ")" << std::endl;
    std::cout << "Point coordinates Wc (center of mass): (" << Wcx << ", " << Wcy << ")" << std::endl;

    return 0;
}