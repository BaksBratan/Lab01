#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // ������ ���������
    const double b_constant = 2;
    const double k_constant = 1.8;

    // ������ b � ���������
    cout << "Enter value b: ";
    double b;
    cin >> b;

    // ��������� k
    double k = pow(k_constant, 3);

    // ��������� t
    double t = pow(b, 2) + k;

    // ��������� a
    double a = sqrt(b + t);

    // ��������� y
    double y = pow(sin(pow(a, 2) + pow(b, 2)), 4);

    // ������� ���������
    cout << "Calculation result: " << y << endl;

    return 0;
}