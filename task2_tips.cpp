// Задание 2. Чаевые.

#include <iostream>
using namespace std;

int main() {
    int tip;

    long long sum = 0;
    int maxTip = 0;
    int accepted = 0;
    int records = 0;

    cout << "Введите чаевые (-1 - конец ввода): ";
    cin >> tip;

    while (tip != -1) {
        if (tip <= 0) {
            cout << "Некорректное значение пропущено." << endl;
        }
        else {
            sum += tip;
            accepted++;

            if (accepted == 1 || tip > maxTip) {
                maxTip = tip;
                records++;
            }
        }

        cout << "Введите чаевые (-1 - конец ввода): ";
        cin >> tip;
    }

    if (accepted == 0) {
        cout << "Чаевые не введены." << endl;
    }
    else {
        cout << "Общая сумма чаевых: " << sum << endl;
        cout << "Принято значений: " << accepted << endl;
        cout << "Максимальные чаевые: " << maxTip << endl;
        cout << "Рекордов: " << records << endl;
    }

    return 0;
}