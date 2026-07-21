/*
 * promagram.cpp
 * A small demonstration program added to the repository as requested.
 * Prints a friendly banner and demonstrates simple input/output.
 */

#include <iostream>
#include <string>

int main() {
    std::cout << "Promagram — simple demo program" << std::endl;
    std::cout << "Enter your name: ";
    std::string name;
    if (!std::getline(std::cin, name) || name.empty()) {
        name = "friend";
    }
    std::cout << "Hello, " << name << "! This promagram was added and pushed to git." << std::endl;
    return 0;
}
