#include <iostream>
#include <string>
#include "mathfuncs.h"

void printHelp() {
    std::cout << "Swiss Army Calculator\n";
    std::cout << "Commands:\n";
    std::cout << "  help         - show this message\n";
    std::cout << "  add a b      - add two numbers\n";
    std::cout << "  sub a b      - subtract b from a\n";
    std::cout << "  mul a b      - multiply two numbers\n";
    std::cout << "  div a b      - divide a by b\n";
    std::cout << "  quit         - exit\n";
}

int main() {
    std::string command;
    double a, b;
    std::cout << "Swiss Army Calculator. Type 'help' for commands.\n";
    while (true) {
        std::cout << "> ";
        std::cin >> command;
        if (command == "help") printHelp();
        else if (command == "quit") break;
        else if (command == "add") { std::cin >> a >> b; std::cout << a + b << "\n"; }
        else if (command == "sub") { std::cin >> a >> b; std::cout << subtract(a, b) << "\n"; }
        else if (command == "mul") { std::cin >> a >> b; std::cout << multiply(a, b) << "\n"; }
        else if (command == "div") { std::cin >> a >> b; std::cout << divide(a, b) << "\n"; }
        else std::cout << "Unknown command. Type 'help'.\n";
    }
    return 0;
}
