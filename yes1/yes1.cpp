#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2, result;
    char operation;

    cout << "Введите первое число: ";
    while (!(cin >> num1)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка: введите число: ";
    }

    cout << "Введите оператор (+, -, *, /, %): ";
    cin >> operation;

    cout << "Введите второе число: ";
    while (!(cin >> num2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка: введите число: ";
    }

    if (operation == '+') {
        result = num1 + num2;
        cout << "Результат: " << result << endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Результат: " << result << endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Результат: " << result << endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Результат: " << result << endl;
        }
        else {
            cout << "Ошибка: деление на ноль невозможно." << endl;
        }
    }
    else if (operation == '%') {
        result = (num1 * num2) / 100;
        cout << num2 << "% от " << num1 << " равно " << result << endl;
    }
    else {
        cout << "Ошибка: неверный оператор." << endl;
    }

    return 0;
}