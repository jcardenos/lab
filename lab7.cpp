#include <iostream>
#include <cmath>

using namespace std;

class Vector {
    public:
        double x = 0.0;
        double y = 0.0;
        double z = 0.0;

        double result()
        {
            return(sqrt(x * x + y * y + z * z));
        }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Vector vector{};

    do {
        cout << "Введите координату x: ";
        cin >> vector.x;

        if (!cin.good()) {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел.\n" << endl;
        }   else break;
    } while (true);

    do {
        cout << "Введите координату y: ";
        cin >> vector.y;

        if (!cin.good()) {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел.\n" << endl;
        }
        else break;
    } while (true);

    do {
        cout << "Введите координату z: ";
        cin >> vector.z;

        if (!cin.good()) {
            cin.clear();
            cin.ignore(10, '\n');
            cout << "Ошибка: на ввод должно поступить значение из поля вещественных чисел.\n" << endl;
        }
        else break;
    } while (true);

    cout << "Модуль вектора равен " << vector.result();

    return 0;

    system("pause");
}
