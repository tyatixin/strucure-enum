#include <iostream>
#include <string>
#include <windows.h>

struct adress {
    std::string City;
    std::string Street;
    int Num_Build;
    int Flat_num;
    long Index;
};

void output_adress (adress M) {
    std::cout << "Город: " <<  M.City 
    << "\nУлица: " << M.Street 
    << "\nНомер дома: " << M.Num_Build
    << "\nНомер квартиры: " << M.Flat_num
    << "\nИндекс: " << M.Index << "\n" << std::endl;
}

int main () {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    adress M;
    M.City = u8"Москва";
    M.Street = u8"Арбат";
    M.Num_Build = 12;
    M.Flat_num = 8;
    M.Index = 123456;
    output_adress (M);

    adress I;
    I.City = u8"Ижевск";
    I.Street = u8"Пушкина";
    I.Num_Build = 59;
    I.Flat_num = 143;
    I.Index = 953769;
    output_adress (I);

    char input_adress = 'y';
    while (input_adress == 'y') {
            adress temp;

            std::cin.ignore();

            std::cout << "Введите город: ";
            std::getline(std::cin, temp.City);

            std::cout << "Введите улицу: ";
            std::getline(std::cin, temp.Street);
            
            std::cout << "Введите номер дома: ";
            std::cin >> temp.Num_Build;

            std::cout << "Введите номер квартиры:"; 
            std::cin >> temp.Flat_num;

            std::cout << "Введите индекс: ";
            std::cin >> temp.Index;
            output_adress (temp);

            std::cout << "Желаете продолжить наполнение адресов? (y/n): ";
            std::cin >> input_adress;

            std::cin.ignore();
        }

    return EXIT_SUCCESS;
}