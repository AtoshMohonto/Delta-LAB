#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Chai
{ // class name always starts with Capital letters
public:
    // data members (attributes<-class er vitor je variable gula takhe)
    string teaName;             // name of the tea
    int servings;               // numbers of serving
    vector<string> ingredients; // list of ingredients for the the tea

    // member function -> class er member
    void displaychaiDetails()
    {
        cout << "Tea Name:" << teaName << endl;
        cout << "Servings:" << servings << endl;
        cout << "ingredients:";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    };
};
int main()
{
    // making object ->object name always in small letter
    Chai chaiOne;
    chaiOne.teaName = "lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"water", "lemon", "suger", "tea leaves"};

    chaiOne.displaychaiDetails();
    Chai chaiTwo;
    chaiTwo

    return 0;
}
