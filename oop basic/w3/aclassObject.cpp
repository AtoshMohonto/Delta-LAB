#include<iostream>
#include<string>
using namespace std;
class MyClass{
    public:
    int myNum;
    string myString;
};
int main(){
    MyClass obj1; //create an object of MyClass

    //access attributes and set values
    obj1.myNum =15;
    obj1.myString ="Hello World";
    //print values
    cout<<obj1.myNum<<endl;
    cout<<obj1.myString<<endl;
    return 0;
}
