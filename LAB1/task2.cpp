#include <cstdint>
#include <iostream>
#include <string>
#include <clocale>

int main()
{
    // Настройка локали для корректного вывода кириллицы
    setlocale(LC_ALL, "Russian");

    // Переменная типа int со значением 150
    int intVar = 150;

    // Переменная типа float со значением 15.933
    float floatVar = 15.933f;

    // Переменная со значением 250 с минимальным расходом оперативной памяти (1 байт, диапазон 0..255)
    uint8_t minMemVar = 250;

    // Вывод всех переменных в формате: «ИМЯ ПЕРЕМЕННОЙ = ЗНАЧЕНИЕ»
    // Примечание: minMemVar приводится к int для числового вывода, иначе выведется как ASCII-символ
    std::cout << "int_var = " << intVar << std::endl;
    std::cout << "float_var = " << floatVar << std::endl;
    std::cout << "minMemVar = " << static_cast<int>(minMemVar) << std::endl;

    std::cout << std::endl;

    // Переменные для дня рождения, месяца (строка) и года
    int birth_day = 28;
    std::string birth_month = "июля";
    int birth_year = 2005;

    // Вывод даты рождения в формате «Моя дата рождения: ДЕНЬ МЕСЯЦ ГОД года»
    std::cout << "Моя дата рождения: " << birth_day << " " << birth_month << " " << birth_year << " года" << std::endl;

    std::cout << std::endl;

    // Две константы: вещественное число 2.3 и строка "WINDOWS"
    const float k_Var = 2.3f;
    const std::string k_String = "WINDOWS";

    // Вывод значений констант через пробел
    std::cout << k_Var << " " << k_String << std::endl;

    return 0;
}
