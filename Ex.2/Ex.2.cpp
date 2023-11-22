#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // �������� ������ �������
    int j;

    std::cout << "Enter the option number: ";
    std::cin >> j;

    // ���������� ������ ����������
    double Ax = 0, Ay = 0;
    double Bx = j, By = j - 1;
    double Cx = -j, Cy = j + 1;

    // ���������� ��������� ����� Mb �� Wc
    double Mbx = (Ax + Bx) / 2, Mby = (Ay + By) / 2;  // ���������� ����� Mb - �������� ������ AB (������)
    double Wcx = (Ax + Bx + Cx) / 3, Wcy = (Ay + By + Cy) / 3;  // ���������� ����� Wc - ������ ��� ���������� (��� ���������� ��������)

    // ��������� ����������
    std::cout << "Point coordinates Mb (medians): (" << Mbx << ", " << Mby << ")" << std::endl;
    std::cout << "Point coordinates Wc (center of mass): (" << Wcx << ", " << Wcy << ")" << std::endl;

    return 0;
}