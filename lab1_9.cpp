#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Эта программа находит момент времени T, в который отклонение маятника максимально по введённым\nпараметрам частоты маятника и коэффициента амплитуды." << endl;
	cout << endl;

	double coefficient_of_initial_amplitude = 0.0;
	while (coefficient_of_initial_amplitude == (double)(int) coefficient_of_initial_amplitude) {
		cout << "Закон маятника: x(t) = A * sin(w*t + f_0). Во сколько раз в начальный момент координата x меньше амплитуды A?\nВведите коэффициент k: ";
		cin >> coefficient_of_initial_amplitude;
	}

	double frequency_of_pendulum = 0.0;
	while (frequency_of_pendulum == (double)(int) frequency_of_pendulum) {
		cout << "Введите частоту маятника w: ";
		cin >> frequency_of_pendulum;
	}

	const double PI = acos(-1.0);

	double fi_0 = asin(1 / coefficient_of_initial_amplitude);
	double time = (PI / 2 - fi_0) / frequency_of_pendulum;

	cout << "Отклонение маятника максимально в момент времени " << time << endl;
}
