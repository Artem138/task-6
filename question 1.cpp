#include <iostream>

int main()
{
    std::cout << "Enter a positive number: ";
    int num{};
    std::cin >> num;

    if (num < 0) { // Добавили фигурные скобки для блока if
        std::cout << "Negative number entered.  Making positive.\n";
        num = -num;
    }

    std::cout << "You entered: " << num;

    return 0;
}
