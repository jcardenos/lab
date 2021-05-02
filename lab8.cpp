#include <iostream>
#include <cmath>

using namespace std;

class Complex {
    public:
        double x = 0.0;
        double y = 0.0;
};

void calculate_result(double x, double y) {
    double a = cos(x) * cosh(y);
    double b = sin(x) * sinh(y);

    cout << "Значение косинуса комплексного числа равно " << a << " + i * " << b << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    Complex number{};

    do {
        cout << "Введите координату x: ";
        cin >> number.x;

        if (!cin.good()) {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел.\n" << endl;
        }
        else break;
    } while (true);

    do {
        cout << "Введите координату y: ";
        cin >> number.y;

        if (!cin.good()) {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел.\n" << endl;
        }
        else break;
    } while (true);

    calculate_result(number.x, number.y);

    system("pause");
}
