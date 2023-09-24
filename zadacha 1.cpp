#include <iostream>
using namespace std;

int main() {
    // Оголошуємо змінні для температур у обох шкалах
    float TC, TF;

    // Запитуємо користувача ввести температуру у Цельсіях
    cout << "Enter the temperature in degrees Celsius: ";
    cin >> TC;

    // Конвертуємо температуру у Фаренгейти
    TF = (TC * 9 / 5) + 32;

    // Виводимо результат
    cout << "Temperature in degrees Fahrenheit: " << TF << endl;

    return 0;
}
