#include <iostream>
#include <string>
using namespace std;
int main(){
    //array ->continous memory allocation
        int chaiTemperature[5]={85,90,70,92,86};
        cout<<"Chai Temperature: \n";
        for(int i=0 ;i<=5 ;i++ ){
            cout<< "\t \b \t "<< chaiTemperature [i]<< " degree C\n";
            /*Chai Temperature: 
                 85 degree C
                 90 degree C
                 70 degree C
                 92 degree C
                 86 degree C
                 */
        }
    
    return 0;
}
     ///for(int i=1 ;i<5 ;i++ )
     /*Chai Temperature:
                 90 degree C
                 70 degree C
                 92 degree C
                 86 degree C
                 */

    
     ///for(int i=1 ;i<=5 ;i++ )
    /*Chai Temperature: 
                 90 degree C
                 70 degree C
                 92 degree C
                 86 degree C
                 5 degree C ->it is a garbage value
                 
                 */