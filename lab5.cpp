#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Программа выполняет умножение матрицы и числа.\n" << endl;

	int number_of_rows = 0;

	do {
		cout << "Введите количество строк матрицы (целое положительное число): ";
		cin >> number_of_rows;

		if (!cin.good() || (number_of_rows < 0)) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Ошибка: на ввод должно поступить целое положительное число." << endl;
		} else break;
	} while (true);

	int number_of_cols = 0;

	do {
		cout << "Введите количество столбцов матрицы (целое положительное число): ";
		cin >> number_of_cols;

		if (!cin.good() || (number_of_cols < 0)) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Ошибка: на ввод должно поступить положительное целое число." << endl;
		} else break;
	} while (true);

	cout << endl;

	double** matrix;
	matrix = new double* [number_of_rows];

	for (int i = 0; i < number_of_rows; i++) {
		matrix[i] = new double[number_of_cols];
	}

	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_cols; j++) {
			cout << "Введите элемент матрицы [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matrix[i][j];
		}
		cout << "\n" << endl;
	}

	cout << "Исходная матрица:\n" << endl;

	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_cols; j++) {
			cout << "|| " << matrix[i][j] << " || ";
		}
		cout << endl;
	}

	cout << "\n" << endl;

	double number = 0.0;

	do {
		cout << "Введите число, на которое вы хотите умножить исходную матрицу: ";
		cin >> number;

		if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел." << endl;
		} else break;
	} while (true);

	cout << endl;

	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_cols; j++) {
			matrix[i][j] = matrix[i][j] * number;
		}
	}

	cout << "Матрица, умноженная на число " << number << ":\n" << endl;

	for (int i = 0; i < number_of_rows; i++) {
		for (int j = 0; j < number_of_cols; j++) {
			cout << "|| " << matrix[i][j] << " || ";
		}
		cout << endl;
	}

	for (int i = 0; i < number_of_rows; i++) {
		delete matrix[i];
	}

	delete[] matrix;
	system("pause");
}
