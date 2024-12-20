#include <iostream>
#include <cmath>
using namespace std;
int distance(int a_x, int a_y, int b_x, int b_y) {
	int dx = a_x - b_x, dy = a_y - b_y;
	return sqrt(dx * dx + dy * dy);
}

int main() {
	//Алгоритм расчета
	system("chcp 1251");
	int q_x, q_y;
	cout << "a_x, a_y: ";
	cin >> q_x >> q_y;
	int b_x, b_y;
	cout << "b_x, b_y: ";
	cin >> b_x >> b_y;
	cout << "���������� ����� ����� �������:" << "(" << q_x << "," << " " << q_y << ")" << "(" << b_x << "," << " " << b_y << "):" << distance(q_x, q_y, b_x, b_y) << endl;
}