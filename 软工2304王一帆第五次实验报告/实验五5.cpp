#include<iostream>
using namespace std;
class Point {
private:
	int x ,y ;
public:
	Point(int x2, int y2) {
		x = x2;
		y = y2;
	}
	void setPoint(int i, int j);
	void display();
};
void Point::setPoint(int i, int j) {
	x = x + i;
	y = y + j;
}
void Point::display() {
	cout << "�µ�����Ϊ(" << x << "," << y << ")" << endl;
}
int main() {
	Point p1(60,80);
	int i, j;
	cout << "�����������ı仯" << endl;
	cin >> i >> j;
	p1.setPoint(i, j);
	p1.display();
	return 0;
}