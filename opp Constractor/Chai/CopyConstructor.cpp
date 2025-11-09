#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
    string* teaName;
    int servings;
    vector<string> ingredients;
    // Default Constructor
    Chai(string name,int serve, vector<string> ingreds){
        teaName = new string (name);
        servings = serve;   
        ingredients = ingreds;
        cout << "Chai Created with default values.(CONSTRACTOR CALLED)" << endl;
    }
    // Copy Constructor
    Chai(Chai& other){
        teaName =new string (*other.teaName);
        servings =other.servings;
        ingredients =other.ingredients;
        cout << "Copy Constructor Called." << endl;
    }
     ~Chai(){
        delete teaName;
        cout << "Destructor called, memory freed." << endl;
     }
    void displayChaiDetails(){
        cout << "Tea Name: " << *teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for(const string& ingredient : ingredients){
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main(){

    Chai lemonTea("Lemon Tea", 3, {"Water", "Lemon", "Sugar", "Honey"});
    //lemonTea.displayChaiDetails();

    //copy the object
    Chai copiedChai = lemonTea; // Copy Constructor is called here
    //copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "lemon tea--------" << endl;
    lemonTea.displayChaiDetails();
     cout << "Copied tea-------" << endl;
   
    copiedChai.displayChaiDetails();
    return 0;
}
