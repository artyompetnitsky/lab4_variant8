// Задание 4. Числовой треугольник.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите размер треугольника (3..9): ";
    cin >> n;

    if (n < 3 || n > 9) {
        cout << "Ошибка ввода" << endl;
        return 1;
    }

    long long total = 0;

    for (int i = 1; i <= n; i++) {
        long long rowSum = 0;

        for (int j = 1; j <= i; j++) {
            int value = i * j;
            cout << value << " ";
            rowSum += value;
        }

        cout << "| " << rowSum << endl;
        total += rowSum;
    }

    cout << "Общая сумма всех чисел: " << total << endl;

    return 0;
}