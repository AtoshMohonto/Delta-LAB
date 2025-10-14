#include <iostream>
#include <string>
using namespace std;
void pourChai(int &cups){ //pass by referance->shudu & bose
    cups=cups+5;
    cout<< "Poured cups:" << cups << endl;//7

}
int main(){
int Cups=2; 
pourChai(Cups);
cout<< "Total cups are:"<<Cups<<endl; //2
  
    return 0;
}
