#pragma once

class Date {
public:
    int day;
    int month;
    int year;

    // Конструктор
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Перегрузка оператора "-" для разницы в днях
    int operator-(const Date& other) const {
        // Разница в днях
        int days1 = year * 365 + month * 30 + day;
        int days2 = other.year * 365 + other.month * 30 + other.day;

        // Возвращаем модуль разницы
        if (days1 > days2) {
            return days1 - days2;
        }
        else {
            return days2 - days1;
        }
    }
};