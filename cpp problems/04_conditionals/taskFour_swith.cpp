#include <iostream>
using namespace std;
int main()
{
    int choice;
    double price;

    cout << "Select your tea\n";
    cout << "1.Green\n2.Red\n3.lemon tea\n";
    cout << "Enter your choice number:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        price = 2.0;
        cout << "You selected Green Tea.Price:" << price << endl;
        break;
    case 2:
        price = 3.0;
        cout << "You selected Red Tea.Price:" << price << endl;
        break;
    case 3:
        price = 4.0;
        cout << "You selected lemon Tea.Price:" << price << endl;
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }

    return 0;
}
