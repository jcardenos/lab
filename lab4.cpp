#include <iostream>
#include <cmath>

using namespace std;

double calculate_scalar_multiplication(double* a, double* b, int n) { // Функция, возвращающая результат формулы скалярного произведения
	double result = 0.0;

	for (int i = 0; i < n; i++) {
		result += a[i] * b[i];
	}
	return (result);
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Программа находит скалярное произведение двух векторов." << endl;

	int number_of_planes = 0;

	do {
		cout << "Введите количество плоскостей (положительное целое число): ";
		cin >> number_of_planes;

		if (!cin.good() || (number_of_planes < 0)) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Ошибка: на ввод должно поступить целое положительное число." << endl;
		} else break;
	} while (true);

	double* a = new double[number_of_planes];

	for (int i = 0; i < number_of_planes; i++) {
		do {
			cout << "Введите координату '" << i + 1 << "' первого вектора (вещественное число): ";
			cin >> a[i];

			if (!cin.good()) {
				cin.clear();
				cin.ignore(10, '\n');
				cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел." << endl;
			} else break;
		} while (true);
	}

	double* b = new double[number_of_planes];

	for (int i = 0; i < number_of_planes; i++) {
		do {
			cout << "Введите координату '" << i + 1 << "' второго вектора (вещественное число): ";
			cin >> b[i];

			if (!cin.good()) {
				cin.clear();
				cin.ignore(10, '\n');
				cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел." << endl;
			} else break;
		} while (true);
	}

	cout << "Скалярное произведение двух векторов a и b равно " << calculate_scalar_multiplication(a, b, number_of_planes) << endl;

	delete[] a;
	delete[] b;

	system("pause");
}
