#include <iostream>
#include <cmath>
using namespace std;

int calcRectPerimeter(int l, int w) { // Функция расчёта периметра
	int p = 2 * (l + w);
	return p;
}

int calcRectArea(int l, int w) { // Функция расчёта площади
	int area = l * w;
		return area;
}

double calcRectDiag(int l, int w) { // Функция расчёта диагонали
	double diag = sqrt(l * l + w * w);
	return diag; 
}

int main() {
	cout << "Введите длину двух сторон" << endl;
	int l, w;
	cin >> l;
	cin >> w;
	cout << "Периметр равен: " << calcRectPerimeter(l, w) << endl;
	cout << "Площадь равна: " << calcRectArea(l, w) << endl;
	cout << "Диагональ равна: " << calcRectDiag(l, w) << endl;
}
