#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Эта программа находит результат произведения (1+(1/2)^(2n)) при n от 0 до вводимого вами числа." << endl;
	cout << endl;

	double max_number = 0.0;

	do {
		cout << "Введите верхнюю границу произведения: ";
		cin >> max_number;

		if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "Необходимо ввести вещественное число. Повторите ввод." << endl;
		}
		else {
			break;
		}
	} while (true);

	double result = 0.0;

	for (int i = 0; i <= max_number; i++) {
		result = (1.0 + pow(0.5, (2.0 * i)));
		result *= result;
	}

	cout << "Результат вычисления при верхней границе n = " << max_number << " равен " << result << endl;
}
