#include <iostream>
#include <iomanip>
#define PI 3.141592653589793
using namespace std;

double calcCircleCircumference(double r){
	return 2 * PI * r;
}

double calcCircleArea(double r){
	return PI * r * r;
}

double calcCircleSectorArea(double r, double ang){
	return (ang / 360) * PI * r * r;
}

int main() {
	cout << "Введите радиус круга, угол сектора и до какого знака после запятой выводить" << endl;
	double r, ang;
	int prc;
	cin >> r; 
	cin >> ang;
	cin >> prc;
	cout << fixed << setprecision(prc) << "Длина окружности: " << calcCircleCircumference(r) << endl;
	cout << "Площадь круга: " << calcCircleArea(r) << endl;
	cout << "Площадь кругового сектора: " << calcCircleSectorArea(r, ang) << endl;
}

