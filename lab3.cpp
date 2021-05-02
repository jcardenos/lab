#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Программа находит момент порядка случайной величины.\n" << endl;

	int law_of_distribution = 0;
	int moment_of_order = 0;

	do {
		cout << "Введите закон распределения (целое положительное число): ";
		cin >> law_of_distribution;

		if (!cin.good() || (law_of_distribution < 0)) {
			cin.clear();
			cin.ignore();
			cout << "Ошибка: на ввод должно поступить целое положительное число. Повторите ввод." << endl;
		} else break;

	} while (true);

	do {
		cout << "Введите порядок момента K (целое положительное число): ";
		cin >> moment_of_order;

		if (!cin.good() || (moment_of_order < 0)) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Ошибка: на ввод должно поступить целое положительное число. Повторите ввод." << endl;
		}
		else break;

	} while (true);

	double* e = new double[law_of_distribution];

	for (int i = 0; i < law_of_distribution; i++) {
		do {
			cout << "Введите величину E" << i + 1 << ": ";
			cin >> e[i];

			if (!cin.good()) {
				cin.clear();
				cin.ignore();
				cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел." << endl;
			}
			else break;

		} while (true);
	}

	int* probabilities = new int[law_of_distribution];
	int v = 0;

	for (int i = 0; i < law_of_distribution; i++) {
		do {
			cout << "Введите " << i + 1 << " значение вероятности в процентах: ";
			cin >> probabilities[i];

			if ((!cin.good()) || ((v + probabilities[i]) > 100) || (probabilities[i] < 0)) {
				cin.clear();
				cin.ignore();
				cout << "Ошибка: вероятность не может быть больше ста процентов." << endl;
			}	else {
				v = v + probabilities[i];
				break;
			}
		} while (true);
	}

	double result = 0.0;

	for (int i = 0; i < law_of_distribution; i++) {
		result += pow(e[i], moment_of_order) / 100 * probabilities[i];
	}

	cout << "Результат: " << result << endl;

	delete[] e;
	delete[] probabilities;

	system("pause");
}
