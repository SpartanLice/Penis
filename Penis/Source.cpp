#include <iostream>
using namespace std;

struct ppData {
	char name[20];
	float size;
	float trueSize;
};

void bullshit();

int main() {
	setlocale(LC_ALL, "ukr");
	cout << "�������, �����, ������� �� �������� ����.\n";
	cout <<	"������� ���� ��. '1'-������� �����. '2'-������ ��������.\n";
	int choice;
	cin >> choice;
	switch (choice) {
	case 1:bullshit(); break;
	case 2:bullshit(); break;
	}
	bullshit();
	system("pause");
	return 0;
}

void bullshit() {
	ppData pp;
	float size;
	cout << "����� ���: ";
	cin >> pp.name;
	kastrat: cout << "����� ����i� ����� ������: ";
	cin >> size;
	pp.size = size;
	if (size > 20) {
		cout << "����� �� ���i������, � ���� ��������� ��������? ����� �� ������� �� ��i, ��������.\n";
		goto kastrat;
	}
	else if (size > 0) {
		size *= 0.1f;
		pp.trueSize = size;
		cout << "�� �i���. ��i� ����i�: " << size << "��." << endl;
	}
	else if (size == 0) {
		cout << "����� �� �� �������? ��������� ����� ������ ����.\n";
		goto kastrat;
	}
	else if (size < 0 && size >= -20) {
		size = -size;
		pp.trueSize = size*10;
		cout << "���, �� � ���� ����������� �i���! ���i �� �������: " << size*10 << "��." << endl;
	}
	else if (size < -20) cout << "����� �� �����! ������� ����������\n";
}
