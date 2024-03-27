#include <iostream>
using namespace std;

int main() {

	string name, team;
	int id;

	cout << "팀 이름을 입력하세요: ";
	cin >> team;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> id;

	cout << "<출력>\n";
	cout << "팀 이름: " << team << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << id;
}