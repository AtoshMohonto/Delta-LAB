#include <iostream>
using namespace std;
int main()
{   bool isStudent ;
    int cups;
    cout<< "Are you a student(1 for Yes and for No)? :";
    cin >> isStudent ;
    cout<< "How many cups of tea have you purchased? :";
    cin >> cups;
    if(isStudent || cups>15){
        cout << "You are elegible for a discount";
    }else{
    cout << "You are not elegible for a discount";
    }
    return 0;
}
