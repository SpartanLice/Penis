#include <iostream>
#include <iomanip>
using namespace std;

const int max = 100;
int measure = 0;
struct ppData {
	char name[20];
	float size;
	float trueSize;
}pp[max];

void bullshit();
void pullOut();

int main() {
	setlocale(LC_ALL, "ukr");
	cout << "�������, �����, ������� �� �������� ���i�.\n";
rewind: cout << "�����i�� ���� �i�. '1'-���i���� �����. '2'-������ ���i�����.\n";
	int choice;
	cin >> choice;
	switch (choice) {
	case 1:bullshit(); break;
	case 2:pullOut(); break;
	}
	goto rewind;
	system("pause");
	return 0;
}

void bullshit() {
	float size;
	cout << "����� i��: ";
	cin >> pp[measure].name;
	kastrat: cout << "����� ����i� ����� ������: ";
	cin >> size;
	pp[measure].size = size;
	if (size > 20) {
		cout << "����� �� ���i������, � ���� ��������� ��������? ����� �� ������� �� ��i, ��������.\n";
		goto kastrat;
	}
	else if (size > 0) {
		size *= 0.1f;
		pp[measure].trueSize = size;
		cout << "�� �i���. ��i� ����i�: " << size << "��." << endl;
	}
	else if (size == 0) {
		cout << "����� �� �� �������? ��������� ����� ������ ����.\n";
		goto kastrat;
	}
	else if (size < 0 && size >= -20) {
		size = -size;
		pp[measure].trueSize = size*10;
		cout << "���, �� � ���� ����������� �i���! ���i �� �������: " << size*10 << "��." << endl;
	}
	else if (size < -20) cout << "����� �� �����! ������� ����������\n";
	measure++;
}

void pullOut() {
	cout << "-----------------------------------------------" << endl;
	cout << "|     I��     |  �I�����  |  ��������� ����I�  |" << endl;
	for (int i = 0; i < measure; i++) {
		cout << "-----------------------------------------------" << endl;
		cout << "|" << setw(9) << pp[i].name << setw(5) << "|" << setw(5) << pp[i].size << "��" << setw(5) << "|" << setw(9) << pp[i].trueSize << "��" << setw(10) << "|" << endl;
	}
	cout << "-----------------------------------------------" << endl;
}
