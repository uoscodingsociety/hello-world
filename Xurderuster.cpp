#include <iostream>
using namespace std;

int main()
{
    string username;
    cout << "What is your username? ";
    getline(cin, username);
    cout << "Hello " << username << "!" << endl;
    return 0;
}