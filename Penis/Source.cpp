#include <iostream>
using namespace std;

struct ppData {
	char name[20];
	float size;
	float trueSize;
};

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
	ppData pp;
	float size;
	cout << "����� i��: ";
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

void pullOut() {
	ppData pp;
	cout << "-----------------------------------------------" << endl;
	cout << "|    I��     |  �I�����  |  ��������� ����I�  |" << endl;
	cout << "|" << pp.name << "|" << pp.size << "|" << pp.trueSize << "|" << endl;
	cout << "-----------------------------------------------" << endl;
}
