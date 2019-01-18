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
	ppData pp;
	float size;
	cout << "Введи iмя: ";
	cin >> pp.name;
	kastrat: cout << "Введи розмiр свого ствола: ";
	cin >> size;
	pp.size = size;
	if (size > 20) {
		cout << "Їбать ти розiйшовся, в тебе комплекси далбайоб? Давай по чесному як всi, далбайоб.\n";
		goto kastrat;
	}
	else if (size > 0) {
		size *= 0.1f;
		pp.trueSize = size;
		cout << "Не пiзди. Твiй розмiр: " << size << "см." << endl;
	}
	else if (size == 0) {
		cout << "Єбать ти шо кастрат? Нормальне число напиши баба.\n";
		goto kastrat;
	}
	else if (size < 0 && size >= -20) {
		size = -size;
		pp.trueSize = size*10;
		cout << "Ааа, то в тебе виявляється пiзда! Тодi її глибина: " << size*10 << "см." << endl;
	}
	else if (size < -20) cout << "ЄБАТЬ ТИ ШЛЮХА! СУКАААА АХАХАХАХАХ\n";

}

void pullOut() {
	ppData pp;
	cout << "-----------------------------------------------" << endl;
	cout << "|    IМЯ     |  ПIЗДЬОЖ  |  ПРАВДИВИЙ РОЗМIР  |" << endl;
	cout << "|" << pp.name << "|" << pp.size << "|" << pp.trueSize << "|" << endl;
	cout << "-----------------------------------------------" << endl;
}
