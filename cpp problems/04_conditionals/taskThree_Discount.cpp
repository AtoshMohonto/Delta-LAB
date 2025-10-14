#include <iostream>
using namespace std;
int main()
{
    int cups;
    double pricePerCup = 2.5, totalPrice, discount;
    cout << "Enter the Numbers of te cups:";
    cin >> cups;
    totalPrice= pricePerCup*cups;
    if (cups > 20)
    {
        discount = .20;
    }
    else if (cups >= 10 && cups <= 20)
    {
        discount = .10;
    }
    else
    {
        discount = 0;
    }

   //otalPrice=totalPrice- (totalPrice*discount);
    totalPrice-=(totalPrice*discount);
     cout<< "Your discouted Price:"<< totalPrice << endl;
     return 0;
}
