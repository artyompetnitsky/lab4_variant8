// Задание 3. Заказ обедов по бюджету.

#include <iostream>
using namespace std;

int main() {
    int budget;

    cout << "Введите бюджет (8..200): ";
    cin >> budget;

    if (budget < 8 || budget > 200) {
        cout << "Ошибка ввода" << endl;
        return 1;
    }

    int guests;

    do {
        cout << "Введите количество гостей (1..15): ";
        cin >> guests;

        if (guests < 1 || guests > 15) {
            cout << "Отказ: количество гостей должно быть от 1 до 15." << endl;
        }
        else if (guests * 8 > budget) {
            cout << "Отказ: обед на " << guests << " гостей стоит " << guests * 8
                 << ", бюджета " << budget << " не хватает." << endl;
        }
    } while (guests < 1 || guests > 15 || guests * 8 > budget);

    int cost = guests * 8;

    cout << "Гостей: " << guests << endl;
    cout << "Стоимость обедов: " << cost << endl;
    cout << "Сдача: " << budget - cost << endl;

    return 0;
}