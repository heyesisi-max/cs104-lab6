#include <iostream>
#include <string>

void printHelp() {
    std::cout << "Swiss Army Calculator\n";
    std::cout << "Commands:\n";
    std::cout << "  help - show this message\n";
    std::cout << "  quit - exit\n";
}

int main() {
    std::string command;
    std::cout << "Swiss Army Calculator. Type 'help' for commands.\n";
    while (true) {
        std::cout << "> ";
        std::cin >> command;
        if (command == "help") printHelp();
        else if (command == "quit") break;
        else std::cout << "Unknown command. Type 'help'.\n";
    }
    return 0;
}
