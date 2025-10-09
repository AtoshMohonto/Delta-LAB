#include <iostream>
using namespace std;
int main()
{  
//casting->switching datatype
  
    //without precision (datatype-int)
        float teaPrice=49.99;
        int price=(int)teaPrice; //c-style casting
        cout<<price<<endl;

    //with precision (datatype-double or float)
        float teaPrice2=49.99;
        double price2=teaPrice2; //implicit casting
        cout<<price2<<endl;

//strings
    string favouriteDrink="tea";  //escape sequence->/n(new line) & /t(tab) & /b(backspace) 
    cout<<"My favourite drink is "+favouriteDrink<<endl;
    string description=":lemon tea";
    cout<<  favouriteDrink+description<<endl;

    return 0;
}
