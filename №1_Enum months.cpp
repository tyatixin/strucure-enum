#include <iostream>

enum class months
{
    january = 1,
    february, 
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main(int argc, char** argv)
{
    int month_number;
    bool exit = false;

    while(exit == false) {
        std::cout << "Введите номер месяца: ";
        std::cin >> month_number;

        switch (month_number) {
        
        case (1):
        std::cout << "Январь" << std::endl;
        break;

        case (2):
        std::cout << "Февраль" << std::endl;
        break;

        case (3):
        std::cout << "Март" << std::endl;
        break;

        case (4):
        std::cout << "Апрель" << std::endl;
        break;

        case (5):
        std::cout << "Май" << std::endl;
        break;

        case (6):
        std::cout << "Июнь" << std::endl;
        break;

        case (7):
        std::cout << "Июль" << std::endl;
        break;

        case (8):
        std::cout << "Август" << std::endl;
        break;

        case (9):
        std::cout << "Сентябрь" << std::endl;
        break;

        case (10):
        std::cout << "Октябрь" << std::endl;
        break;

        case (11):
        std::cout << "Ноябрь" << std::endl;
        break;

        case (12):
        std::cout << "Декабрь" << std::endl;
        break;

        case (0): 
        std::cout << "До свидания" << std::endl;
        exit = true;
        break;

        default: 
        std::cout << "Неправильный номер!" << std::endl;
        break;
        }
    }
    return 0;
}