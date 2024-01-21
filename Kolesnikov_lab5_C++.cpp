#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <stdexcept>
#include <limits>
#include "Car.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    CarDatabase car_db;
    int quit = 0;
    int option;

    try {
        while (!quit) {
            cout << "Выберите действие:\n";
            cout << " 1. Создать запись об автомобиле\n";
            cout << " 2. Редактировать конкретную запись\n";
            cout << " 3. Вывести все существующие записи\n";
            cout << " 4. Вывести конкретную запись\n";
            cout << " 5. Удалить конкретную запись\n";
            cout << " 0. Выйти\n > ";

            if (cin >> option) {
                system("cls");
                switch (option) {
                case 1:
                    car_db.Input();
                    break;
                case 2:
                    cout << "Редактирование находится в разработке!\n\n";
                    break;
                case 3:
                    car_db.Output();
                    break;
                case 4:
                    cout << "Вывод конкретной записи находится в разработке!\n\n";
                    break;
                case 5:
                    cout << "Удаление находится в разработке!\n\n";
                    break;
                case 0:
                    cout << "Выход.\n";
                    quit = 1;
                    break;
                default:
                    cout << "Некорректный ввод. Попробуйте еще раз\n\n";
                    break;
                }
            }
            else {
                system("cls");
                throw runtime_error("Некорректный ввод. Пожалуйста, введите числовое значение.");
            }
        }
    }
    catch (const exception& e) {
        cerr << "Поймано исключение: " << e.what() << endl;
    }

    return 0;
}
