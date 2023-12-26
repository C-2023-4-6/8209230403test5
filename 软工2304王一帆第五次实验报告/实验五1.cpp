#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:   
	int hour;
	int minute;
	int sec;
public:
	void setTime(int h, int m, int s) {
		hour = h;
		minute = m;
		sec = s;
	}
	void showTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;         //定义t1为Time类对象
	int h, m, s;
	cout << "enter hour:";
	cin >> h;
	cout << "enter minute:";
	cin >> m;
	cout << "enter sec:";
	cin >> s;
	t1.setTime(h, m, s);
	t1.showTime();
	return 0;
}
//hour,minute,sec指定为私有，h,m,s指定为公用，setTime，showTime应在类中，main在类外