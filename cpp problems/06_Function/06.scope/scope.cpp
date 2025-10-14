#include <iostream>
#include <string>
using namespace std;
int main(){
int global=100; //global variable 

    {
        //{}  nam scope
    }
{
    int local=2;  //local variable
    if(){
        int t=5 + local; //accessable
    }
}
    return 0;
}
