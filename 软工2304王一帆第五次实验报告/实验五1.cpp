#include<iostream>
using namespace std;
class Time             // ����Time��
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
	Time t1;         //����t1ΪTime�����
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
//hour,minute,secָ��Ϊ˽�У�h,m,sָ��Ϊ���ã�setTime��showTimeӦ�����У�main������