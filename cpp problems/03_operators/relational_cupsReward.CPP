#include <iostream>
using namespace std;
int main()
{   int cups;
    cout << "Enter the numbers of cups you have:";
    cin>> cups;
    if(cups>20){
        cout<< "You will get a Gold Badge" <<endl;
    }else if(cups>=10 && cups<=20){

        cout<< "You will get a Silver Badge" <<endl;
        
    }else{
        cout<< "No Badge for you" <<endl;
    }
    
    return 0;
}
