//
// Created by Alexey Dubovik on 5.12.22.
//

#include "MainActivity.h"
void menu() {
    while (true) {
        int k;
        cout << "Выберите необходимую опцию\n";
        cin >> k;
        cout << "1- Создание заявки\n" << "2- Редактирование заявки\n" << "3-Вывод заявок\n";
        switch (k) {
            case 1:
                CreatingHotelApplication();

        }
    }
}
void CreatingHotelApplication()
{}