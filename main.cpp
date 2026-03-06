#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.141592653589793
using namespace std;

int calcRectPerimeter(int l, int w) {
    int p = 2 * (l + w);
    return p;
}

int calcRectArea(int l, int w) {
    int area = l * w;
    return area;
}

double calcRectDiag(int l, int w) {
    double diag = sqrt(l * l + w * w);
    return diag; 
}

double calcCircleCircumference(double r) {
    return 2 * PI * r;
}

double calcCircleArea(double r) {
    return PI * r * r;
}

double calcCircleSectorArea(double r, double ang) {
    return (ang / 360.0) * PI * r * r;
}

int main() {
    while (true) {
        cout << "\nВыберите фигуру (если захотите закрыть программу - 0)\nПрямоугольник - 1\nКруг - 2\nФигура - ";
        int p;
        cin >> p;
        switch (p) {
            case 1: {
                cout << "Введите длину двух сторон" << endl;
                int l, w;
                cin >> l;
                cin >> w;
                cout << "Периметр равен: " << calcRectPerimeter(l, w) << endl;
                cout << "Площадь равна: " << calcRectArea(l, w) << endl;
                cout << "Диагональ равна: " << calcRectDiag(l, w) << endl;
                break;
            }
            case 2: {
                cout << "Введите радиус круга, угол сектора и до какого знака после запятой выводить" << endl;
                double r, ang;
                int prc;
                cin >> r;
                cin >> ang;
                cin >> prc;
                cout << fixed << setprecision(prc) << "Длина окружности: " << calcCircleCircumference(r) << endl;
                cout << "Площадь круга: " << calcCircleArea(r) << endl;
                cout << "Площадь кругового сектора: " << calcCircleSectorArea(r, ang) << endl;
                break;
            }
            case 0: 
                return 0;
            default:
                cout << "Неверный ввод" << endl;
        }
    }
}

