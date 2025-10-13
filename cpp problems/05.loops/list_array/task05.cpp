#include <iostream>
#include<string>
using namespace std;
int main(){   
    string teatypes[5]={"Oolong Tea","Green Tea","Orange Tea","Black Tea","Lemon Tea"};
    
    for(int i=0; i<7;i++){
        if(teatypes[i]=="Green Tea"){
           cout<< "Skiping the "<< teatypes[i]<<endl;
            continue;
        }
          cout<< "Brewing "<< teatypes[i]<< "..."<<endl;

    }
    
    return 0;
}
