#include <iostream>
using namespace std;
void serveChai(int cups); //declaration and break

// declaration and definition of function
void makeChai()
{
    cout << "Making chai with Boiling water,adding tea leaves,straining..." << endl;
}

// definition of function
void serveChai(int cups)
{
    cout << "Serving " << cups << " cups of chai" << endl;
}

//  declaration of function
int main()
{   makeChai();// function call
    serveChai(5);
    return 0;
}