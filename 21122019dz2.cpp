#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    cout << "Задание 2.\n";
    cout << "\n";
    cout << "Написать программу, которая преобразует введенное с клавиатуры дробное число в\n";
    cout << "денежный формат. Например, число 12,5 должно быть преобразовано к виду 12грн 50 коп.\n";
    cout << "\n";
    cout << "Решение для задания № 2:\n";
    cout << "\n";
    double a;
    cout << "Введите число \"a\" = ";
    cin >> a;
    int grn = a;
    int kop = int(a * 100) % 100;
    cout << "\n";
    cout << grn << " грн., " << kop << " коп." << endl;
}
