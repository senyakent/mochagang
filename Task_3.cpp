#include <iostream>
#include<cmath>
using namespace std;

int main() {
    double start, end, step;
    cout << "Введите начальное значение x: ";
    cin >> start; // Задаем исходное значение переменной
    cout << "Введите конечное значение x: ";
    cin >> end; // Задаем конечно значение переменной
    cout << "Введите шаг: ";
    cin >> step; // Задаем шаг, с которым с которым будет изменяться аргумент
    for (double x = start; x <= end; x += step) {
        double y = sin(x); // функция y = sin(x)
        cout << x << " | " << y << endl; // Выводим значения функции для каждого аргумента (x | y)
    }
    return 0;
}