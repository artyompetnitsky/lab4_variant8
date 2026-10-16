// Задание 1. Заказы кафе.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите количество заказов (1..30): ";
    cin >> n;

    if (n < 1 || n > 30) {
        cout << "Ошибка ввода" << endl;
        return 1;
    }

    double revenue = 0.0;
    int discounted = 0;

    for (int i = 1; i <= n; i++) {
        int dishes;
        double price;

        cout << "Заказ " << i << " - количество блюд: ";
        cin >> dishes;

        cout << "Заказ " << i << " - цена одного блюда: ";
        cin >> price;

        if (dishes < 1 || dishes > 10 || price < 1 || price > 100) {
            cout << "Ошибка ввода" << endl;
            return 1;
        }

        double sum = dishes * price;

        if (sum > 300) {
            sum = sum - sum * 0.15;
            discounted++;
        }

        cout << "Заказ " << i << " к оплате: " << sum << endl;
        revenue += sum;
    }

    cout << "Общая выручка: " << revenue << endl;
    cout << "Заказов со скидкой: " << discounted << endl;

    return 0;
}