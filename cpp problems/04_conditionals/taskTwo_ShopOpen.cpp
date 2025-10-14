#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter the Current Hour(0-23):";
    cin>> hour;
    if(hour >=8 && hour <=18){
        cout<< "The Tea Stall is Open !";
    }else{
        cout<< "The Tea Stall is Close !";
    }
    return 0;
}
