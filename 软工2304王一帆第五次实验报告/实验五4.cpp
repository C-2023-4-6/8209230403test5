#include<iostream>
using namespace std;
class Student {

public:
	int id;
	int score;
	void max(Student* students, int size);
};
void Student::max(Student *students, int size) {
	int maxscore = students[0].score;
	int maxindex = 0;
	for (int i = 1; i < size; i++) {
		if (students[i].score > maxscore) {
			maxscore = students[i].score;
			maxindex = i;
		}
	}
	cout << "最高成绩者学号为：" << students[maxindex].id << endl;
}
int main() {
	Student students[5] = { {1,99},{2,91},{3,100},{4,86}, {5,98} };
	students[5].max(students, 5);
	return 0;
}