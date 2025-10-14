#include <iostream>
#include <string>
using namespace std;
int main(){
    //lanbda -> one kind of function but there are no name..
    auto preparedChai = [] (int cups){
        cout << "Preparing" << "cups of tea"<<endl;
    };
    preparedChai(4);
    return 0;
}
