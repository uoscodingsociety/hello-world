#include <iostream>

int main(int argc, char const *argv[])
{
    std::string username;

    std::cout << "Enter your username: ";
    std::cin >> username;

    std::cout << "Hello, " << username << std::endl;

    return 0;
}