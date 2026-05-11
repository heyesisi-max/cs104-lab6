#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "mathfuncs.h"
#include "randfuncs.h"

void printHelp() {
    std::cout << "Swiss Army Calculator\n";
    std::cout << "Commands:\n";
    std::cout << "  help         - show this message\n";
    std::cout << "  add a b      - add two numbers\n";
    std::cout << "  sub a b      - subtract b from a\n";
    std::cout << "  mul a b      - multiply two numbers\n";
    std::cout << "  div a b      - divide a by b\n";
    std::cout << "  coin         - flip a coin\n";
    std::cout << "  d6           - roll a 6-sided die\n";
    std::cout << "  d20          - roll a 20-sided die\n";
    std::cout << "  quit         - exit\n";
}

int main() {
    srand(time(0));
    std::string command;
    double a, b;
    std::cout << "Swiss Army Calculator. Type 'help' for commands.\n";
    while (true) {
        std::cout << "> ";
        std::cin >> command;
        if (command == "help")      printHelp();
        else if (command == "quit") break;
        else if (command == "add")  { std::cin >> a >> b; std::cout << a + b << "\n"; }
        else if (command == "sub")  { std::cin >> a >> b; std::cout << subtract(a, b) << "\n"; }
        else if (command == "mul")  { std::cin >> a >> b; std::cout << multiply(a, b) << "\n"; }
        else if (command == "div")  { std::cin >> a >> b; std::cout << divide(a, b) << "\n"; }
        else if (command == "coin") std::cout << (flipCoin() ? "Heads" : "Tails") << "\n";
        else if (command == "d6")   std::cout << "Rolled: " << rollD6() << "\n";
        else if (command == "d20")  std::cout << "Rolled: " << rollD20() << "\n";
        else std::cout << "Unknown command. Type 'help'.\n";
    }
    return 0;
}
