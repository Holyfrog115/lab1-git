// Лабораторная работа № 1. Вариант 63.
// Выполнил: Конышев Е. Г., группа ПИ-52.
#include <iostream>
using namespace std;

// ===== Расчётные функции варианта =====
// Перевод километры -> мили
double kmToMiles(double km)
{
    return km * 0.621371;
}

// Перевод мили -> километры
double milesToKm(double mi)
{
    return mi * 1.609344;
}

// ===== Главная функция: меню =====
int main()
{
    int choice;
    double a, b;
    do
    {
        cout << "\n*** Конвертер величин. Вариант 63 ***\n";
        cout << "1. Километры -> Мили\n";
        cout << "2. Мили -> Километры\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Введите километры: ";
            cin >> a;
            cout << a << " Км = " << kmToMiles(a) << " Миль" << "\n";
            break;
        case 2:
            cout << "Введите мили: ";
            cin >> a;
            cout << a << " Миль = " << milesToKm(a) << " Км" << "\n";
            break;
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}