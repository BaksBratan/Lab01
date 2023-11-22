#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Задати константи
    const double b_constant = 2;
    const double k_constant = 1.8;

    // Ввести b з клавіатури
    cout << "Enter value b: ";
    double b;
    cin >> b;

    // Обчислити k
    double k = pow(k_constant, 3);

    // Обчислити t
    double t = pow(b, 2) + k;

    // Обчислити a
    double a = sqrt(b + t);

    // Обчислити y
    double y = pow(sin(pow(a, 2) + pow(b, 2)), 4);

    // Вивести результат
    cout << "Calculation result: " << y << endl;

    return 0;
}