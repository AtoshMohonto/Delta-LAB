#include <iostream>
#include <string>
using namespace std;

class school
{
public:
    string name;
    int established;
    string madam;
    school(string n, int e, string m)
    {
        name = n;
        established = e;
        madam = m;
    }
};

int main()
{
    // Create school objects and call the constructor with different values
    school agrojatra("Agrojatra Shishu Bikash School", 2015, "Bijali Mohonto");
    school brac("Brac School", 2015, "Kobita Rani");
    // Print values
cout<< "--------------------------------start\n";
    cout << "School Name:" << agrojatra.name << "\nestablished:" << agrojatra.established << "\nmadam:" << agrojatra.madam << "\n";
  cout<< "--------------------------------\n";
    cout << "School Name:" << brac.name << "\nestablished:" << brac.established << "\nmadam:" << brac.madam << "\n";
cout<< "--------------------------------end\n";
    return 0;
}
