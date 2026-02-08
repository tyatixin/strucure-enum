#include <iostream>
#include <string>


struct bank_account {
    long long bank_number;
    std::string name_owner;
    float balance;
};

void AllAccounts(bank_account* accounts, int count) {
    std::cout << "\n=== СПИСОК ВСЕХ СЧЕТОВ ===\n";
    for (int i = 0; i < count; i++) {
        std::cout << (i + 1) << ". " 
                  << accounts[i].name_owner << " | "
                  << accounts[i].bank_number << " | "
                  << accounts[i].balance << "\n";
    }
}

int main (int argc, char ** argv) {
    bank_account* account_array = new bank_account [50];
    int account_count = 0;
    char continue_choice = 'y';

        for (int i = 0; i < 50 && (continue_choice == 'y'); i++) {
        std::cout << "\n==============Пользователь № " << (i + 1) << "===============\n" << std::endl;    
    
        std::cout << "Введите номер счёта: ";
        std:: cin >> account_array[i].bank_number;

        std::cout << "Введите имя владельца: ";
        std:: cin >> account_array[i].name_owner;

        std::cout << "Введите баланс: ";
        std:: cin >> account_array[i].balance;
        std::cout << "---------------------------------------------" << std::endl;

        std::cout << "Ваш счёт: " << account_array[i].name_owner 
        << "\t" << account_array[i].bank_number  << "\t" 
        << account_array[i].balance << std::endl;
        
        account_count++;

        std::cout << "Желаете продолжить?: (y/n) ";
        std::cin >> continue_choice;
        }

    AllAccounts(account_array, account_count);

    delete[] account_array;
    return EXIT_SUCCESS;
}