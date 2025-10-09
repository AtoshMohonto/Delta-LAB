#include <iostream>
using namespace std;
int main()
{
    int cups;
    double pricePerCup, totalPrice, discountPrice;
    cout << "Enter the number of tea cups:";
    cin >> cups;
    cout << "Enter the price per tea:";
    cin >> pricePerCup;
    totalPrice = cups * pricePerCup;
    // apply 5% discount if total price is above 100

    if (totalPrice > 100)
    {
        cout << "\tTotal Price is:" << totalPrice << endl;
        discountPrice = totalPrice - (totalPrice * .05);
        cout << "\tas you purchased more than 100 tk so you are our lucky custumer and you get 5% \b of discount." << endl;
        cout << "\tYour discounted Price:" << discountPrice << endl;
    }
    else
    {
        cout << "Total Price is:" << totalPrice << endl;
    }

    return 0;
}
