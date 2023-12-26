#include<iostream>
using namespace std;
class Cfx {
public:
	int l, w, h,V;

	void setCfx();
	void calCfx();
	void showCfx();
};
void Cfx::setCfx() {
	cout << "enter l,d,h:" << endl;
	cin >> l >> w >> h;
}
void Cfx::calCfx() {
	
	V = l * w * h;
}
void Cfx::showCfx() {
	cout << "the volume of Cfx is:" << V << endl;
	
}
int main() {
	Cfx c1;
	c1.setCfx();
	c1.calCfx();
	c1.showCfx();
	return 0;
}