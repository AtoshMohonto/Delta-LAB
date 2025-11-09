#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
    string teaName;
    int servings;
    vector<string> ingredients;
    // Default Constructor
    Chai(){
        teaName = "Masala Chai";
        servings = 2;   
        ingredients = {"Water", "Milk", "Tea Leaves", "Spices", "Sugar"};
        cout << "Chai Created with default values.(CONSTRACTOR CALLED)" << endl;
    }
    
    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for(const string& ingredient : ingredients){
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main(){

    Chai defaultChai; // Default constructor is called here
    defaultChai.displayChaiDetails();
    return 0;
}
