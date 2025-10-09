#include <iostream>
using namespace std;
int main()
{
    string userTea;
    int teaQuanty;
    cout << "What would you like to drink?" << endl;
    getline(cin, userTea); // for string input with spaces
    // ask for quanty
    cout << "How many cups of \b " << userTea << "\b would you like?" << endl;
    cin >> teaQuanty; // for integer input
    cout << "You have ordered" << teaQuanty << "cups of" << userTea << endl;

    return 0;
}
