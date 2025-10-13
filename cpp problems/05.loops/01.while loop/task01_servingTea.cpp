#include <iostream>
using namespace std;
int main()
{   
    int teaCups;
    cout<< "Enter number of cups: ";
    cin>> teaCups;
    // while loop 
    while(teaCups > 0){
        teaCups--;
        cout<< "Serving a cup of tea \n" << teaCups<< " ramaining "<< endl;
    }
    cout<< "All cups are served"<< endl;
    
    
    return 0;
}
