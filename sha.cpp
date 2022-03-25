#include<iostream>

int main(int argc, char const* argv[]) {
    std::string name;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello " << name << std::endl;
    return 0;
}
