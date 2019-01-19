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
	cout << "Ласкаво, блять, просимо до програми пенiс.\n";
rewind: cout << "Виберiть вашу дiю. '1'-Вимiряти ствол. '2'-Список вимiряних.\n";
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
	cout << "Введи iмя: ";
	cin >> pp[measure].name;
	kastrat: cout << "Введи розмiр свого ствола: ";
	cin >> size;
	pp[measure].size = size;
	if (size > 20) {
		cout << "Їбать ти розiйшовся, в тебе комплекси далбайоб? Давай по чесному як всi, далбайоб.\n";
		goto kastrat;
	}
	else if (size > 0) {
		size *= 0.1f;
		pp[measure].trueSize = size;
		cout << "Не пiзди. Твiй розмiр: " << size << "см." << endl;
	}
	else if (size == 0) {
		cout << "Єбать ти шо кастрат? Нормальне число напиши баба.\n";
		goto kastrat;
	}
	else if (size < 0 && size >= -20) {
		size = -size;
		pp[measure].trueSize = size*10;
		cout << "Ааа, то в тебе виявляється пiзда! Тодi її глибина: " << size*10 << "см." << endl;
	}
	else if (size < -20) cout << "ЄБАТЬ ТИ ШЛЮХА! СУКАААА АХАХАХАХАХ\n";
	measure++;
}

void pullOut() {
	cout << "-----------------------------------------------" << endl;
	cout << "|     IМЯ     |  ПIЗДЬОЖ  |  ПРАВДИВИЙ РОЗМIР  |" << endl;
	for (int i = 0; i < measure; i++) {
		cout << "-----------------------------------------------" << endl;
		cout << "|" << setw(9) << pp[i].name << setw(5) << "|" << setw(5) << pp[i].size << "см" << setw(5) << "|" << setw(9) << pp[i].trueSize << "см" << setw(10) << "|" << endl;
	}
	cout << "-----------------------------------------------" << endl;
}
