#include <iostream>
#include <cmath>
using namespace std;

double distance(double a_x, double a_y, double b_x, double b_y) {
	double dx = a_x - b_x, dy = a_y - b_y;
	return sqrt(dx * dx + dy * dy);
}

int main() {
	system("chcp 1251");
	double a_x, a_y;
	cout << "a_x, a_y: ";
	cin >> a_x >> a_y;
	double b_x, b_y;
	cout << "b_x, b_y: ";
	cin >> b_x >> b_y;
	cout << "дистанция между точками : " << distance(a_x, a_y, b_x, b_y) << endl;
}