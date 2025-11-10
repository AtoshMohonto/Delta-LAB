#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
    string teaName;
    int servings;
    vector<string> ingredients;
    // Default Constructor
    Chai(string name,int serve, vector<string> ingreds){
        teaName = name;
        servings = serve;   
        ingredients = ingreds;
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

    Chai lemonTea("Lemon Tea", 3, {"Water", "Lemon", "Sugar", "Honey"});
    lemonTea.displayChaiDetails();
    return 0;
}
