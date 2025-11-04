#include <iostream>
#include <string>
using namespace std;
class MyClass
{                    // The class
public:              // Access specifier
    void myMethod(); // method/function declared outside the class
};
// Define the method outside the class
void MyClass::myMethod(){
 cout<<"Hello World!";
} 
int main()
{ MyClass myObj;
    myObj.myMethod(); // Call the method
    return 0;
}
