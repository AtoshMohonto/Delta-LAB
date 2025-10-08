#include <iostream>
using namespace std;
int main()
{   //negative will allowed in int
    int smallTeaPack1 = -100; 
    cout << "Small tea packs are(int):";
    cout << smallTeaPack1 << endl;

    //negative willnot allowed in Unsigned
    unsigned smallTeaPack2 = -100; 
    cout << "Small tea packs are(garbage value/unsigned):";
    cout << smallTeaPack2 << endl; //random output

      //negative will allowed in signed
    signed smallTeaPack3 = -100; 
    cout << "Small tea packs are(signed):";
    cout << smallTeaPack3 << endl; 

    return 0;
}
