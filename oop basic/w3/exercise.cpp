#include<iostream>
using namespace std;
class MyClass{
    public:
    int myNum;
};
int main(){
    MyClass obj1; //create an object of MyClass

    //access attributes and set values
    obj1.myNum =15;
    //print values
    cout<<obj1.myNum<<endl;
    return 0;
}